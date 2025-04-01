class Solution {
public:

 

    int ftd(vector<int>&nums,int i, vector<int>&dp){
    //base case ya to ek gr ho ya 2
    
    if(i==nums.size()-1) return nums[i];   //single house
    if(i==nums.size()-2)   return max(nums[i],nums[i+1]);     //2house
     
     if(dp[i]!=-1)   return dp[i];


    return dp[i]=max(nums[i]+ftd(nums,i+2,dp),0+ftd(nums,i+1,dp));
    }

   int rob(vector<int>& nums) {
    int n=nums.size();
    vector<int>dp;
    dp.resize(105,-1);
         return ftd(nums,0,dp);
    }
};