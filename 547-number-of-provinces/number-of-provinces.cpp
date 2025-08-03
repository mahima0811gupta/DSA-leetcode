class Solution {
public:

    void bfs(int node,unordered_map<int,vector<int>>&adj,vector<bool>&visited){
          queue<int>q;
          q.push(node);
           visited[node]=true;
           while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto &neigh:adj[u]){
                if(!visited[neigh]){
                    q.push(neigh);
                    visited[neigh]=true;
                }
            }
           }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        /// concept here make the count variable and when we run the dfs function ,then inc cnt+= as it means the connceted path is visited
         int n=isConnected.size();
       unordered_map<int,vector<int>>adj;
      
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
                bfs(i,adj,visited);
                cnt++;
               
            }
        }
        return cnt;
    }
};