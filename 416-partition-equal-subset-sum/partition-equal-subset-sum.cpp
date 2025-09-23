class Solution {
public:

    bool subsetsum(vector<int>& nums,int n, int sum, vector<vector<int>>&dp){
        //basecase
        if(sum==0) return true;
        if(sum==0 && n==0)  return true;
        if(n==0) return false;
         if(dp[n][sum]!=-1)   return dp[n][sum];
        if(sum>=nums[n-1]){
          dp[n][sum]=subsetsum(nums,n-1,sum-nums[n-1],dp) ||subsetsum(nums,n-1,sum,dp); 
        }
        else 
        dp[n][sum]=subsetsum(nums,n-1,sum,dp);

        return dp[n][sum];
    } 
      bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
       
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        if(sum%2!=0) return false;

         vector<vector<int>>dp(n+1,vector<int>(sum+2,-1));
        
        return subsetsum(nums,n,sum/2,dp);

    }
};