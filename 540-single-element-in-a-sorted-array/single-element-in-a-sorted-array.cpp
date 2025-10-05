class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n=nums.size();
       if(n==1)  return nums[0];

       //last index
       if(nums[n-1]!=nums[n-2])  return nums[n-1];
       //first index
       int i=0;
       if(nums[i]!=nums[i+1])  return nums[i];

       int s=1;
       int e=n-2;
       while(s<=e){

        int mid=s+(e-s)/2;
        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
        return nums[mid];
   if(mid%2==0 && nums[mid]==nums[mid-1] || mid%2!=0 && nums[mid]==nums[mid+1])
      ///left side hoga
      e=mid-1;

      else {
        s=mid+1;
      }
       }
        return -1;     
    }
};