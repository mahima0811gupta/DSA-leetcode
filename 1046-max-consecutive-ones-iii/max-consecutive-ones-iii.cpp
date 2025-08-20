class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int maxlen=0;
        int zeros=0;
        int i=0,j=0;
        while(j<n){
            if(nums[j]==0) zeros++;
              if(zeros>k){
            // av hume zeros kam krna hoga.... so i ko jaha 0 h wha a lana h
             if(nums[i]==0) zeros--;
             i++;
            }
            else{
            maxlen=max(maxlen,j-i+1);
            }
            j++;

            
        }
        return maxlen;

    }
};