class Solution {
public:
   
   vector<int>dp;

    int f(int n){
         
         if(n==0)  return 1;

         if(dp[n]!=-1)  return dp[n];
         int ways=0;
         for(int i=1;i<=2;i++){
            if(n-i>=0)
             ways+=f(n-i);
         }

         return dp[n]=ways;
    }
    int climbStairs(int n) {
        dp.clear();
        dp.resize(50,-1);

        return f(n);
    }
};