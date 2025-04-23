class Solution {
public:
    vector<int>dp;
    int f(vector<int>& nums,int i){
        if(i<2)  return 0;
       if(dp[i]!=-1)   return dp[i];
        if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
            dp[i]=f(nums,i-1)+1;
        }
        else{
        dp[i]=0;
        }
         return dp[i];
    }
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        dp.clear();
        dp.resize(5005,-1);
      int ans=0;
        for(int i=2;i<nums.size();i++){
            ans += f(nums, i);
          
        }
         return ans;
    }
};