class Solution {
public:

 vector<int>dp;

    int f(vector<int>&nums,int i){
    //base case ya to ek gr ho ya 2
    
    if(i==nums.size()-1) return nums[i];   //single house
    if(i==nums.size()-2)   return max(nums[i],nums[i+1]);     //2house
     
     if(dp[i]!=-1)   return dp[i];


    return dp[i]=max(nums[i]+f(nums,i+2),0+f(nums,i+1));
    }

   int rob(vector<int>& nums) {
    int n=nums.size();
    dp.clear();
    dp.resize(105,-1);
         return f(nums,0);
    }
};