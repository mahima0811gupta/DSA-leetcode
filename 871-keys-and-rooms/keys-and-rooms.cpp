class Solution {
public:
    void bfs(vector<vector<int>>& rooms,int node, vector<bool>&visited){
        queue<int>q;
        q.push(node);
        visited[node]=true;
       while(!q.empty()){
          int u=q.front();
          q.pop();
          for(auto &neigh:rooms[u]){
            if(!visited[neigh]){
                q.push(neigh);
                  visited[neigh]=true;
            }
          }
       }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,false);
       
         bfs(rooms,0,visited);

        for(int i=0;i<n;i++){
            if(visited[i]==false)
            return false;
        }


        return true;
    }
};