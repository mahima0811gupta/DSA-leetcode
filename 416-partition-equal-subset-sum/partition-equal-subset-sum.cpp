class Solution {
public:

    bool subsetsum(vector<int>& nums,  vector<vector<int>>&dp,int sum,int n){
        if(n==0 && sum==0) return true;
        if(sum==0)  return true;
        if(n==0)  return false;
        if(dp[n][sum]!= -1)    return dp[n][sum];
        if(sum>=nums[n-1]){
         dp[n][sum]=subsetsum(nums,dp,sum-nums[n-1],n-1)||subsetsum(nums,dp,sum,n-1);
        }
        else{
            dp[n][sum]=subsetsum(nums,dp,sum,n-1);
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
       int n=nums.size();
       int sum=0;
       for(int i=0;i<n;i++){
        sum+=nums[i];
       } 
       if(sum%2!=0)  return false;
       vector<vector<int>>dp(n+1,vector<int>(sum/2+1,-1));

       return subsetsum(nums,dp,sum/2,n);
    }
};