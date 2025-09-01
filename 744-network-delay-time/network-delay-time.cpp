class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        typedef pair<int,int> pii; 
         vector<vector<pii>>adj(n+1);
        for(auto edge:times){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            adj[u].push_back({v,w});
           
            
        }
        vector<int>result(n+1,INT_MAX);
        
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        
        pq.push({k,0}); //src,cost
        result[k]=0;
        
        while(!pq.empty()){
             int node=pq.top().first;
             int cost=pq.top().second;
             
             pq.pop();
             
             for(auto &neigh:adj[node]){
                 int adjnode=neigh.first;
                 int adjcost=neigh.second;
                       
                 if(cost+adjcost<result[adjnode]){
                     result[adjnode]=cost+adjcost;
                     pq.push({adjnode,cost+adjcost});
                     
                 }
             }
            
        }


        int  maxi=INT_MIN;
        for(int i=1;i<=n;i++){
            maxi=max(result[i],maxi);
        }

        if(maxi==INT_MAX)   return -1;
        return maxi;
    }

};