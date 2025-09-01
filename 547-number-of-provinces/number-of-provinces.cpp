class Solution {
public:

    void dfs(int node, vector<vector<int>>&adj,vector<int>&visited){
        visited[node]=true;
        for(auto &it:adj[node]){
            if(!visited[it]){
                visited[it]=true;
                dfs(it,adj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
          int cnt=0;
   
        vector<vector<int>>adj(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1){
                   adj[i].push_back(j);
                    adj[j].push_back(i);
                 
                }
            }
        }
       vector<int>visited(V,false);
     for(int i=0;i<V;i++){
      for(auto &it:adj[i]){
                  if(!visited[it]){
                    cnt++;
                     dfs(i,adj,visited);
                  }
      }
     }
    

        

        return cnt;
    }
};