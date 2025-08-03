class Solution {
public:
  int n;
    void bfs(int node,vector<vector<int>>&isConnected,vector<bool>&visited){
          queue<int>q;
          q.push(node);
           visited[node]=true;
           while(!q.empty()){
            int curr=q.front();
            q.pop();
           for(int v=0;v<n;v++){
                if( isConnected[v][curr]&& !visited[v]){
                    q.push(v);
                    visited[v]=true;
                }
            }
           }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        /// concept here make the count variable and when we run the dfs function ,then inc cnt+= as it means the connceted path is visited
          n=isConnected.size();
        int cnt=0;
        vector<bool>visited(n,false);

        for(int i=0;i<n;i++){
            if(!visited[i]){
                bfs(i,isConnected,visited);
                cnt++;
               
            }
        }
        return cnt;
    }
};