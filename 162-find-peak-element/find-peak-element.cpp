class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        // edge cases
        if(n==1) return 0;
    
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2])  return n-1;
        
    
        int s=1;
        int e=n-2;
        while(s<=e){

            int mid=s+(e-s)/2;

           
            if((nums[mid]>nums[mid+1])&&(nums[mid]>nums[mid-1]))
            return mid;

            //// mid ya to left side hoga ya right
            // agr mid left side h to peck elemnt right hoga and vise varsa
            

            //left side condition

            else   if (nums[mid] < nums[mid + 1])                                              //if(nums[mid]-1 <nums[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
     
        

        return -1;
    }
};