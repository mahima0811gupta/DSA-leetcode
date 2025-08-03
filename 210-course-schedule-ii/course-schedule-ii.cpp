class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         int n=numCourses;
        vector<vector<int>>adj(n);
        int cnt=0;
        vector<int>result;
        for(auto edge:prerequisites){
            int u=edge[0];
            int v=edge[1];
            adj[v].push_back(u);
        }
        vector<int>indegree(numCourses,0);
        for(int i=0;i<n;i++){
            for(auto &v:adj[i]){
                indegree[v]++;  }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
            q.push(i);
            cnt++;
        }
        }

        while(!q.empty()){
           int u=q.front();
           q.pop();
           result.push_back(u);
           for(auto &v:adj[u]){
            indegree[v]--;
            if(indegree[v]==0){
                q.push(v);
                cnt++;
            }
           }
        }

        if(n==cnt)
        return result; 
        return {};
    }
};