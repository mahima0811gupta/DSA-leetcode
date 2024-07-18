class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans(2);
    int sum=0;
    for(int i=0;i<n;i++) {
    int num=abs(nums[i]);
    int idx=num-1;

   if(nums[idx]<0) {
   ans[0]=num;
   }
   else {
   nums[idx]*=-1;

   }
   sum+=num;
    }
   int expected_sum=n*(n+1)/2;
   ans[1]=expected_sum-sum+ans[0];








    
    return ans;
    }
};