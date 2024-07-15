class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++) {
       ans+=nums[i];
    }
    
    int sum=n*(n+1)/2;

    int missing_number=sum-ans;

    return missing_number;









    }
};