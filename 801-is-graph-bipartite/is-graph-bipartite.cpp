class Solution {
public:
  ///hint to know the given ques indicates that this is bipartite -if in ques given 
   //grouping or dividing a graph into two part .................
   ////using dfs
    bool checkbiparatitebfs(int node,vector<vector<int>>& graph, vector<int>&color,int currcolor){
        color[node] = currcolor; 
       queue<int>q;
       q.push(node);
       while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto &it:graph[u]){
            if(color[it]==color[u])   //adjadent node ke color same h
            return false;

            if(color[it]==-1){
                //not color yet
                color[it]=1-color[u];
                q.push(it);
            }
        }}
        return true;
       }
    
    bool isBipartite(vector<vector<int>>& graph) {
   int V=graph.size();
   vector<int>color(V,-1);       // -1 means not colored,1=red,0=green
   for(int i=0;i<V;i++){
    if(color[i]==-1){
    if(!checkbiparatitebfs(i,graph,color,1)) {
    return false;
    } }
   } 

    return true;
    }
};