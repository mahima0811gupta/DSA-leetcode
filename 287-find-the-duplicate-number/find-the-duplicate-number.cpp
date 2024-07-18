class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n=nums.size();    
   for(int i=0;i<n;i++)  {
   int num=abs(nums[i]);
   int idx=num-1;
   if(nums[idx]<0) {
    return num;

   }
   else {
    nums[idx]*=-1;
   }


   }
   return 0;
    }
};