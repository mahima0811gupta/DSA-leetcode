class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n=nums.size();
     if(nums.size()<=2)  return nums.size();
    int indx=2;
     int j=2;
     while(j<n){
        if(nums[j]!=nums[indx-2]){
            nums[indx]=nums[j];
            indx++;
        }
        j++;
     }
      return indx;
    }
};