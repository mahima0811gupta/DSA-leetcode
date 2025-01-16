class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0,leftsum=0;
        for(int num:nums){
            totalsum+=num;
        }

        for(int i=0;i<n;i++){
            if(leftsum==(totalsum-leftsum-nums[i]))
            return i;

            leftsum+=nums[i];
        }
        return -1;
    }
};