class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)  return true;
            ///edge cases
            if(nums[s]==nums[mid] && nums[mid]==nums[e]){
                s=s+1;
                e=e-1;
                continue;
            }

            /// left part soredted h ya nhi
             if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target <=nums[mid])  // exist krta h
                e=mid-1;
                else
                s=mid+1;
            }


            else
            {

            if(nums[mid]<=target && target <=nums[e])   // right me exist krta h
               s=mid+1;
               else
               e=mid-1;


            }
        }

        return false;


    }
};