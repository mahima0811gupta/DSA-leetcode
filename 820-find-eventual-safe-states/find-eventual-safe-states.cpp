class Solution {
public:

   bool dfs(int node,vector<bool>&visited,vector<bool>&path,   vector<vector<int>>& graph){
   visited[node]=true;
   path[node]=true;
   for(auto &neigh:graph[node]){
    if(!visited[neigh] && dfs(neigh,visited,path,graph)){
              return true;
    }
    else{
        if(path[neigh]==true)
        return true;
    }
   }
   path[node] = false;
   return false;

   }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
      vector<bool>visited(v,false);
      vector<bool>path(v,false);

      for(int i=0;i<v;i++){
           if(!visited[i]){
            dfs(i,visited,path,graph);
        }
      }
     vector<int>safe;

     for(int i=0;i<path.size();i++){
        if(path[i]==false)
        safe.push_back(i);
     }
     return safe;
    }
};