class Solution {
public:
    int n,m;
    vector<vector<int>>dp;
    int f(vector<vector<int>>& obstacleGrid,int i,int j){
        //bASE CASE
        if(i==n-1 && j==m-1)   return 1;
        if(i<0 || j<0 || i>=n || j>=m)   return 0;
        if(obstacleGrid[i][j]==1)  return 0;
           if(dp[i][j]!=-1)   return dp[i][j];
      
        return dp[i][j]=f(obstacleGrid,i+1,j)+f(obstacleGrid,i,j+1);
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         n=obstacleGrid.size();
         m=obstacleGrid[0].size();
            dp.clear();
        dp.resize(105,vector<int>(105,-1));
        if(obstacleGrid[n-1][m-1]==1)   return 0;
    

        return f(obstacleGrid,0,0);
    }
};