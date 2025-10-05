class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l=0, r= n-1;
        if(n==1) return nums[0];

        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid] != nums[mid+1] && nums[mid-1] != nums[mid]){
                return nums[mid];
            }
            if(nums[mid] == nums[mid+1]){
                if((mid) %2 !=0){
                    r= mid-1;
                }else{
                    l = mid+1 +1;
                }
            }else if(nums[mid-1] == nums[mid]){
                 if((mid) %2 !=0){
                    l=mid+1;
                }else{
                    r= mid-2;
                }
            }
        }
        return nums[l];
    }
};