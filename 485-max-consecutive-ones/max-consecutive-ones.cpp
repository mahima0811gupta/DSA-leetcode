class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int maxi=0;
        while(j<n){
            if(nums[j]==1)  {
                j++;
            }
            else{
               maxi=max(maxi,j-i);
               j++;
               i=j;
            }
          
        }
     maxi=max(maxi,j-i);
        return maxi;
    }
};