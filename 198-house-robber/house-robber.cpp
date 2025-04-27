class Solution {
public:
vector<int>dp;
    int f(vector<int>& nums,int i){
        if(i==nums.size()-1)  return nums[i];
        if(i==nums.size()-2)   return max(nums[i],nums[i+1]);

        if(dp[i]!=-1)   return dp[i];
        int ans=INT_MIN;

        ans=max(nums[i]+f(nums,i+2),0+f(nums,i+1));

        return dp[i]=ans;
    }
    int rob(vector<int>& nums) {
        dp.clear();
        dp.resize(105,-1);
        return f(nums,0);
    }
};