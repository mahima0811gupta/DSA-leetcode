class Solution {
public:
   vector<int>dp;
    int f(vector<int>& nums,int i,int n){
        // base case
       if(i>n)  return 0;
        if(dp[i]!=-1)  return dp[i];
        int ans=INT_MIN;
         ans=max(nums[i]+f(nums,i+2,n),f(nums,i+1,n));
         return dp[i]=ans;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)  return nums[0];
        int end1=n-1;
        int end2=n-2;
        dp.clear();
        dp.resize(1005,-1);
        int case1=f(nums,0,end2);
         dp.clear();
        dp.resize(1005,-1);
        int case2=f(nums,1,end1);
        
  return max(case1,case2);
    

    }
};