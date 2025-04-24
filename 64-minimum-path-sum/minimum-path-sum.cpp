class Solution {
public:
  int n,m;
    vector<vector<int>>dp;
    int f(vector<vector<int>>& grid,int i,int j){
        //bASE CASE
          if(i==n-1 && j==m-1)   return grid[i][j];
        if(i<0 || j<0 || i>=n || j>=m)   return INT_MAX;
         //int ans=INT_MAX;
           if(dp[i][j]!=-1)   return dp[i][j];
            return dp[i][j]=grid[i][j] +min(f(grid,i,j+1),f(grid,i+1,j));
        
    }
    int minPathSum(vector<vector<int>>& grid) {
         n=grid.size();
         m=grid[0].size();
            dp.clear();
        dp.resize(205,vector<int>(205,-1));
       
        return f(grid,0,0);
    }
};