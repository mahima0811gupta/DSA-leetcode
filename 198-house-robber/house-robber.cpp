class Solution {
public:

      vector<int>dp;
   int f(int i,vector<int>& nums){
       /// base case
       // ek hi gr ho
       if(i==nums.size()-1)  return nums[i];

       // 2 house ho
       if(i==nums.size()-2)   return max(nums[i],nums[i+1]);
     if(dp[i]!=-1)  return dp[i];
     return dp[i]=max(nums[i]+f(i+2,nums),f(i+1,nums));

   }
    int rob(vector<int>& nums) {
        dp.clear();
        dp.resize(405,-1);
        return f(0,nums); 
    }
};