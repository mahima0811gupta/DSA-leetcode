class Solution {
public:
     int m,n; 
    void dfs(vector<vector<int>>& grid,int i,int j,int &perimeter){
        /////condition out of bound of land
  if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
     perimeter++;
     return;
  } 
     if(grid[i][j]==-1)  return;
     grid[i][j]=-1;   ///mark visited


     dfs(grid,i-1,j,perimeter);
     dfs(grid,i+1,j,perimeter);
     dfs(grid,i,j-1,perimeter);
     dfs(grid,i,j+1,perimeter);

    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
         m=grid.size();
         n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ///we get on one land and all land 
                    //are connected  together so traverse 
                    dfs(grid,i,j,perimeter);
                    return perimeter;
                }
            }
        }

    return -1;
    }
};