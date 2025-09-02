class Solution {
public:
 
 int minCost(int n, vector<vector<int>>& edges) {
    typedef pair<int,int>P;
 vector<vector<pair<int,int>>> adj(n);
        for (auto &e : edges) {
         int u=e[0];
           int v=e[1];
           int w=e[2];
     adj[u].push_back({v,w});
       adj[v].push_back({u,2*w});
        }
   vector<int>result(n, INT_MAX);
      priority_queue<P,vector<P>,greater<P>>pq;
        result[0] = 0;
        pq.push({0, 0});
        while (!pq.empty()) {
            int dist=pq.top().first;
             int node=pq.top().second;
            pq.pop();
        for(auto &neigh:adj[node]){
            int adjnode=neigh.first;
            int adjdist=neigh.second;

            if(dist+adjdist<result[adjnode]){
                result[adjnode]=dist+adjdist;
                pq.push({dist+adjdist,adjnode});
            }
        }
        }

    if(result[n-1]==INT_MAX)  return -1;

    return result[n-1];

    }
};