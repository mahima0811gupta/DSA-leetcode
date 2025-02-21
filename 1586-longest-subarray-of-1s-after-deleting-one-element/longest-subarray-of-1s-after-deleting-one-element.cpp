class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int cntzero=0;
        int maxlen=INT_MIN;
        int n=nums.size();


        while(j<n){

        if(nums[j]==1) j++;
        else
        {
         if(cntzero<1){
            cntzero++;
            j++;
         }
         else   // equal to 1
         {
          maxlen=max(maxlen,j-i-1);
          while(nums[i]==1) i++;
          i++;
          j++;
         }

        }
        }

          maxlen=max(maxlen,j-i-1);
          return maxlen;
    }
};