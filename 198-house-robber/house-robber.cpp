class Solution {
public:


   int f(int i,vector<int>& nums, vector<int>&dp,int n){
    //one rrom
    if(i==n-1)  return nums[i];
    if(i==n-2)  return max(nums[i],nums[i+1]);

    if(dp[i]!=-1)  return dp[i];

    return dp[i]=max(f(i+1,nums,dp,n),nums[i]+f(i+2,nums,dp,n));
   }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(0,nums,dp,n);
    }
};