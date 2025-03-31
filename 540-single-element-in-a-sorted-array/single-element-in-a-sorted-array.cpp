class Solution {
public:

// binary search
    int singleNonDuplicate(vector<int>& nums) {

        int n=nums.size();
          // if single lemnet h to
        
        if(n==1) 
        return nums[0];
  // checking f0r 1dst index
     int i=0;
     if(nums[i]!=nums[i+1])
        return nums[i];

      // last ndex
      if( nums[n-1]!=nums[n-2])
        return nums[n-1];


        int s=1;
        int e=n-2;

        while(s<=e){
               
               int mid=s+(e-s)/2;
              if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])

                     return nums[mid];


         //// eliminate left or right part
         // if mid even pr hoga aur same elemnet odd hoga 
        // ya mid odd pr hoga same ele prior even pr hogi to left part pr h aursingle value rught part pr h to hme left part lemeninate krna hoga

 ///left side
        if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2==1 && nums[mid]==nums[mid-1]){
            // elimate the left part
            s=mid+1;

        }
        else
          e=mid-1;

        }

        return -1;
    }
};