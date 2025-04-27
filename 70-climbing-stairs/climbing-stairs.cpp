class Solution {
public:
    vector<int>dp;
    int f(int n){
        if(n==0)   return 1;
        if(dp[n]!=-1)  return dp[n];
        int sum=0;
        if((n-1)>=0)
        sum=f(n-1);

        if((n-2)>=0)
        sum+=f(n-2);

         return dp[n]=sum;
    }


    int climbStairs(int n) {
        dp.clear();
        dp.resize(50,-1);
        return f(n);
    }
};