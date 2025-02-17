class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int i=0;
      int j=0;
      int n=nums.size();
      int maxlen=INT_MIN;
      while(j<n){
        if(nums[j]==1) j++;
        else   // zero h
        {
           maxlen=max(maxlen,j-i);  
           while(nums[i]==1) i++;
           i++;
           j++;
        }
      }
  maxlen=max(maxlen,j-i);  
  return maxlen;
    }
};