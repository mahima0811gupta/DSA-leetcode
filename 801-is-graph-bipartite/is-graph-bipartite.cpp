class Solution {
public:
  ///hint to know the given ques indicates that this is bipartite -if in ques given 
   //grouping or dividing a graph into two part .................
   ////using dfs
    bool checkbiparatitedfs(int node,vector<vector<int>>& graph, vector<int>&color,int currcolor){
            color[node]=currcolor;
            for(auto &neigh:graph[node]){

                ////if colored h node already check kya node and neigh ka color same h
                if(color[node]==color[neigh])  return false;
  ///if node is not color
                if(color[neigh]==-1){
                    int newcolor=1-currcolor;
                    if(checkbiparatitedfs(neigh,graph,color,newcolor)==false)
                    return false;
                }
            }

            return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
   int V=graph.size();
   vector<int>color(V,-1);       // -1 means not colored,1=red,0=green
   for(int i=0;i<V;i++){
    if(color[i]==-1){
    if(!checkbiparatitedfs(i,graph,color,1)) {
    return false;
    } }
   } 

    return true;
    }
};