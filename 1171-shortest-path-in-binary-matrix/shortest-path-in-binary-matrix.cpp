class Solution {
public:

   vector<vector<int>>directions{{1,1},{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{-1,1},{1,-1}};

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(n==0 || m==0 || grid[0][0]!=0)  return -1;
                queue<pair<int,int>>q;
                q.push({0,0});
                //visit kro
                grid[0][0]=1;
                int level=0;
                while(!q.empty()){
                int N=q.size();
                while(N--){
                  auto curr=q.front();
                  q.pop();
                  int x=curr.first;
                  int y=curr.second;

                  if(x==m-1 && y==n-1) 
                  return level+1;

                  for(auto dir:directions){
                    int x_=x+dir[0];
                    int y_=y+dir[1];


                    if(x_>=0 && y_>=0 && x_<m && y_<n && grid[x_][y_]==0){
                        q.push({x_,y_});
                        grid[x_][y_]=1;
                    }

                  }

                }
                level++;
                }

                return -1;
    }
};