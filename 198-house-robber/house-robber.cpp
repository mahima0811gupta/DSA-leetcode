class Solution {
public:
/// bottom up
vector<int>dp;

    int fbu(vector<int>& nums){
        int n=nums.size();
        dp.clear();
        dp.resize(105,-1);
   //basecase
        if(n==1)   return nums[0];
          dp[n-1]=nums[n-1];
          dp[n-2]=max(nums[n-1],nums[n-2]);

          for(int i=n-3;i>=0;i--){
            dp[i]=max(dp[i+1],dp[i+2]+nums[i]);
          }
    return dp[0];
    }
    int rob(vector<int>& nums) {
       return fbu(nums); 
    }
};