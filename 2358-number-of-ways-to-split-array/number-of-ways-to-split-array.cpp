class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int cnt=0;
        long long totalSum =0;
        long long leftsum=0;
        int n=nums.size();

        for(int num:nums){
             totalSum += num;
        }
        for(int i=0;i<n-1;i++){
             leftsum+=nums[i];
            
            
            if(leftsum>=(totalSum-leftsum))
            cnt++;


        }
        return cnt;
    }
};