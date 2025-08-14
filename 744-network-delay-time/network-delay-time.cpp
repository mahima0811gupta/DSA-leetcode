class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto &e:times){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            adj[u].push_back({v,w});
        }

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
vector<int>result(n+1,INT_MAX);
result[k]=0;
pq.push({0,k});
while(!pq.empty()){
    int d=pq.top().first;
    int node=pq.top().second;
    pq.pop();
    for(auto &it:adj[node]){
        int adjnode=it.first;
        int dist=it.second;

        if(d+dist<result[adjnode]){
            result[adjnode]=d+dist;
            pq.push({d+dist,adjnode});
        }
    }
}
  int maxi=INT_MIN;
for(int i=1;i<=n;i++){
  if(result[i]>maxi)
  maxi=result[i];


}
   if(maxi==INT_MAX)   return -1;

   return maxi;

    }
};