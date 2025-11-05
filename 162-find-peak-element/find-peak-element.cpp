class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;


        if(n==1) return 0;


        while (low <= high) {
            int mid = (low + high) / 2;

            if(mid==0){
                if(nums[mid+1]<nums[mid] ) return mid;
                else low = mid +1;
            }else if(mid==n-1){
                if(nums[mid-1] < nums[mid]) return mid;
                else high = mid-1;
            }else if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]){
                return mid;
            }else if(nums[mid+1] > nums[mid]){
                low = mid+1;
            }else if(nums[mid+1] < nums[mid]){
                high = mid-1;
            }
        }
        return 0;


    // int n = nums.size();
    //      int low = 0, high = n - 1;
    //     if(n==1) return 0;
    //      if(n==2){
    //         if(nums[low]>nums[high]) return low;
    //         else
    //         return high;
    //      }
    //     while (low <= high) {
    //       int mid = (low + high) / 2;

    //       if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])  return mid;

    //       else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]) 
    //          low=mid+1;
          
    //       else{
    //         high=mid-1;
    //       }


    //     }
    //     return 0;
        
    }
};