class Solution {
public:

    void dfs(int node,vector<bool>&visited,vector<vector<int>>& isConnected,int v){
        visited[node]=true;
       for(int j=0;j<v;j++){
         if(isConnected[node][j]==1 && !visited[j])
         dfs(j,visited,isConnected,v);
       }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<bool>visited(v,false);
        int province=0;
        for(int i=0;i<v;i++){
            if(!visited[i]){
                province++;
                dfs(i,visited,isConnected,v);
            }
        }

        return province;
    }
};