class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int indx=0;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[j-1]) {
                indx++;
                nums[indx]=nums[j];
            
            }
        }
        return indx+1;
    }
};