class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        //edge case 
        if(nums[n-2]!=nums[n-1])  return nums[n-1];
        if(nums[0]!=nums[1])   return nums[0];
        //starting even se hogi n...ending odd se hogi...
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];

            else if(nums[mid]==nums[mid-1])  //mid odd pr hona chhaiye  
            { if(mid%2!=0)  //odd h
                  s=mid+1;
               else
                 e=mid-1;  
            }
            else if(nums[mid]==nums[mid+1])    //mid even hoga to sahi h aage badho
             {
                if(mid%2==0)  s=mid+1;
                else e=mid-1;
             }
            }

            return -1;
        
    }
};