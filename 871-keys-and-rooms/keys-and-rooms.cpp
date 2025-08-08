class Solution {
public:

    void dfs(vector<vector<int>>& rooms,int node, vector<bool>&visited){
        visited[node]=true;
        for(auto &neigh:rooms[node]){
            if(!visited[neigh]){
                dfs(rooms,neigh,visited);
            }}
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,false);
       
         dfs(rooms,0,visited);

        for(int i=0;i<n;i++){
            if(visited[i]==false)
            return false;
        }


        return true;
    }
};