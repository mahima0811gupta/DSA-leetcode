class Solution {
public:
    char find(int i,vector<int>&parent){
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
    bool equationsPossible(vector<string>& equations) {
        vector<int>parent(26);
        vector<int>rank(26,0);
        for(int i=0;i<26;i++){
            parent[i]=i;
        }

        for(auto &s:equations){
            if(s[1]=='='){
                //dono ka union  nikalu
                Union(s[0]-'a',s[3]-'a',parent,rank);
            }
        }

        for(auto &s:equations){
            if(s[1]=='!'){
                //// tb check kro dono ka parnt
               char u=find(s[0]-'a',parent);
                char v=find(s[3]-'a',parent);
                if(u==v)   /// mtlb dono equal nhi h bcz != ka sign h
                return false;
            }  
    }
        return true;
    }
};