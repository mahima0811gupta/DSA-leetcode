class Solution {
public:
bool iscycledfs(int node, unordered_map<int,vector<int>>&adj,vector<bool>&visitedcity,vector<bool>&visitedpath){
    visitedcity[node]=true;
    visitedpath[node]=true;
    for(auto neigh:adj[node]){
        if(!visitedcity[neigh] && iscycledfs(neigh,adj,visitedcity,visitedpath))
        return true;
        else {
         if(visitedpath[neigh]==true)
         //cycle h 
         return true;
        }
         
    }
    visitedpath[node]=false;  ///backtracking that path 
return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        unordered_map<int,vector<int>>adj;
        for(auto &edge: prerequisites){
            int a=edge[0];
            int b=edge[1];
            adj[b].push_back(a);
        }

        vector<bool>visitedcity(n,false);
        vector<bool>visitedpath(n,false);

        for(int i=0;i<n;i++){
            if(!visitedcity[i] && iscycledfs(i,adj,visitedcity,visitedpath))
            return false;  ///cycle found cant finish all coouse


        }
     return true;  ///cyce is not found hence finish the course
    }
};