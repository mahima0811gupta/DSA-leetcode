class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int len=0;
        int n=nums.size();
        int minlen=INT_MAX;

        int sum=0;
        while(j<n){
             sum+=nums[j];
             while(sum>=target){
             len=j-i+1;
             minlen=min(len,minlen);
             sum-=nums[i];
             i++;
             }

        j++;
       
       

        }
        if(minlen==INT_MAX)  return 0;
        return minlen;
    }
};