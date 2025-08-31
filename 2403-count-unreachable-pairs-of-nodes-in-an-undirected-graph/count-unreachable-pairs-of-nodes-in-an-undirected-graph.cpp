class Solution {
public:

    int find(int i,vector<int>&parent){
        if(i==parent[i])
        return i;
        return parent[i]=find(parent[i],parent);
    }
    void Union(int x,int y,vector<int>&parent,vector<int>&rank){
        int x_par=find(x,parent);
        int y_par=find(y,parent);

        if(rank[x_par]>rank[y_par]){
            parent[y_par]=x_par;
        }
        else if(rank[y_par]>rank[x_par]){
            parent[x_par]=y_par;
        }
        else {
            parent[x_par]=y_par;
            rank[x_par]++;
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>parent(n);
        vector<int>rank(n,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
///// make the componnet (sets)
   for(auto edge:edges){
    int u=edge[0];
    int v=edge[1];
    Union(u,v,parent,rank);
   }

   unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
        int papa=find(i,parent);   
        mp[papa]++;    /// node vale ,size(feq)
   }

     ///av hume  unreachable pair nikalna h
     //size*(n-size)


     long long remainnode=n;
     long long result=0;

     for(auto &it:mp){
          long long size=it.second;
         result+=(size)*(remainnode-size);
         remainnode-=size;
     }
return result;
    }
};