class Solution {
public:

typedef pair<int,int>pi;
 int prims(vector<vector<pi>>&adj,int V){
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    vector<bool>inmst(V,false);
   pq.push({0,0});  //wt node
    int sum=0;
   while(!pq.empty()){
  pair<int,int>p=pq.top();
  pq.pop();
  int wt=p.first;
  int node=p.second;
 if(inmst[node]==true) continue;
  if(inmst[node]==false){
  inmst[node]=true;
   sum+=wt;
  }
   
   for(auto &neigh:adj[node]){
       int adjnode=neigh.first;
       int adjwt=neigh.second;

       if(inmst[adjnode]==false){
          pq.push({adjwt,adjnode});
       }
   }

}
return sum;
    
 }
    int minCostConnectPoints(vector<vector<int>>& points) {
         int V=points.size();
        vector<vector<pi>>adj(V);
    
        for(int i=0;i<V;i++){
            for(int j=i+1;j<V;j++){
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
                int dist=abs(x1-x2)+abs(y1-y2);
                adj[i].push_back({j,dist});
                adj[j].push_back({i,dist});
            }
        }
  
       return prims(adj,V);

    }
};