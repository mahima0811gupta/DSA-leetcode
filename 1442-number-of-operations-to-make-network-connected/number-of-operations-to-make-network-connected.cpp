class Solution {
public:
    int find(int i,vector<int>&parent){
        if(parent[i]==i)
        return i;
   return parent[i]=find(parent[i],parent);
    }
    void Union(int x,int y,vector<int>&parent,vector<int>&rank){
         int x_parent=find(x,parent);
          int y_parent=find(y,parent);
     if(x_parent==y_parent)      return;
     if(rank[x_parent]>rank[y_parent])  ///jiski rank jyda ho use parent bnate h
          parent[y_parent]=x_parent;
     else if(rank[y_parent]>rank[x_parent])
          parent[x_parent]=y_parent;
       else{//// same ho to kisi ko bhi leader man lo aur rank to +1 kr do
        parent[x_parent]=y_parent;
        rank[y_parent]+=1;
       }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) 
        return -1;
        vector<int>parent(n);
        vector<int>rank(n,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
         int component=n;
        
        for(auto &it:connections){
            int u=it[0];
            int v=it[1];
             if(find(u,parent)!=find(v,parent)) {
            Union(u,v,parent,rank);
            component--;
            }
        }
          
          return component-1;

    }
};