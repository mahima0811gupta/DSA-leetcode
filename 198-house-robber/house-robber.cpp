class Solution {
public:
     vector<int>dp;
    int f(int n,vector<int>& nums ){
        // base case
        // sinle home
        if(n==nums.size()-1)    return nums[n];
        if(n==nums.size()-2)   return max(nums[n],nums[n+1]);
        
          if(dp[n]!=-1)  return dp[n];

          return dp[n]=max(nums[n]+f(n+2,nums),f(n+1,nums));

          

    }




    int rob(vector<int>& nums) {
        dp.clear();
        dp.resize(105,-1);
        return f(0,nums);
    }
};