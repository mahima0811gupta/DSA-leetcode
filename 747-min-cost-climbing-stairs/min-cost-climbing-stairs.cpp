class Solution {
public:

    vector<int>dp;
    int f(vector<int>& cost,int n){
           if(n==cost.size()-1)  return cost[n];
           if (n >= cost.size()) return 0;
        if(dp[n]!=-1)  return dp[n];

       int ans=INT_MAX;
           ans=cost[n] + min(f(cost, n+1), f(cost, n+2));
          return dp[n]=ans;
    }

    int minCostClimbingStairs(vector<int>& cost) {
          dp.clear();
        dp.resize(1005,-1);
        return min(f(cost,0),f(cost,1));
    }
};