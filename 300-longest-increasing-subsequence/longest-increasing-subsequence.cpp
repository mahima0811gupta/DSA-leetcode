class Solution {
public: 
vector<int>dp;

    int f(int i,vector<int>& nums){
        if(i==0)   return 1;
        int mx=0;
        if(dp[i]!=-1) return dp[i];
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i]){
              mx=max(mx,f(j,nums));
            }
        }

        return dp[i]=1+mx;
    }
    int lengthOfLIS(vector<int>& nums) {
        dp.clear();
        dp.resize(2505,-1);
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=max(ans,f(i,nums));
          
        }
         return ans;
    }
};