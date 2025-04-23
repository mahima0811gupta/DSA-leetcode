class Solution {
public:
vector<vector<int>>dp;
   bool f(vector<int>&nums,int i,int k){
    /// base case
    if(k==0)   return true;  //means k keequal subset mil gya

    if(i==nums.size())  return false; //last tk chle gye but k zero nhi hua
   if(dp[i][k]!=-1)  return dp[i][k];
    if(nums[i]<=k){  /// exclude or include only possible
        return dp[i][k]=f(nums,i+1,k-nums[i]) or f(nums,i+1,k);
    }
    else{   //only exculde
   return  dp[i][k]=f(nums,i+1,k);

    }
      }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0) //odd    
        return false;
        dp.clear();
        dp.resize(205,vector<int>(sum+5,-1));
        return f(nums,0,sum/2);
    }
};