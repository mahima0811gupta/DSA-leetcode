class Solution {
public:

    void dfs(int node,unordered_map<int,vector<int>>&adj,vector<bool>&visited){
        
           visited[node]=true;
           for(auto &neigh:adj[node]){
            if(!visited[neigh]){
                dfs(neigh,adj,visited);
            }
           }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        /// concept here make the count variable and when we run the dfs function ,then inc cnt+= as it means the connceted path is visited
         int n=isConnected.size();
       unordered_map<int,vector<int>>adj(n);
      
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                       adj[j].push_back(i);
                }
            }
        }

        int cnt=0;
        vector<bool>visited(n,false);

        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,adj,visited);
                cnt++;
               
            }
        }
        return cnt;
    }
};