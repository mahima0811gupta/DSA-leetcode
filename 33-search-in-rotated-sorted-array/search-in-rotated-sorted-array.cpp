class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]==target)  return mid;

        ////check left part is sorted or not

        else if(nums[s]<=nums[mid]){   //left is sorted
           //check target lies in this or not
           if(nums[s]<=target && nums[mid]>target){
             e=mid-1;
           }
           else   s=mid+1;
        }
        else  {   //right is sorted
            if(nums[mid]<=target && nums[e]>=target){
             s=mid+1;
           }
           else   e=mid-1;
        }
        }
        return -1;
    }
};