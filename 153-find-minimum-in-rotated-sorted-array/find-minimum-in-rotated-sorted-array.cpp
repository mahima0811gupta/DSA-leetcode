class Solution {
public:
    int findMin(vector<int>& nums) {
        
    int n=nums.size();
    int s=0;
    int e=n-1;
    int ans=INT_MAX;
    while(s<=e){

        int mid=s+(e-s)/2;

        /// left half sored h to usme se sbse min ele nikalo jo ki pehla hoga

        if(nums[s]<=nums[mid]){
             ans=min(ans,nums[s]);
             s=mid+1;
        }
 // right part sored h usme se min
        else
        {
              ans=min(ans,nums[mid]);
              e=mid-1;
        }
    }

       return ans;
        
    }
};