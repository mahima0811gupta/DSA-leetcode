class Solution {
public:
    vector<vector<int>>dp;
    #define mod 1000000007
    int f(int n,int k,int target){
        //basecase
        if(n==0 && target==0)  return 1;
        if(n==0)  return 0;
        if(dp[n][target]!=-1)
            return dp[n][target];
           int sum=0;
           for(int v=1;v<=k;v++){
            if(target-v<0) continue;
           sum=(sum%mod + f(n-1,k,target-v)%mod)%mod;

           }
           return dp[n][target]=sum%mod;
    }


    int numRollsToTarget(int n, int k, int target) {
        dp.clear();
        dp.resize(35,vector<int>(1005,-1));
        return f(n,k,target);
    }
};