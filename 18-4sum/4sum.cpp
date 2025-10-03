class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int i=0;i<n-3;i++){
             if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
          if(j>i+1 && nums[j]==nums[j-1]) continue;
               int start=j+1;
               int end=n-1;
               while(start<end){
                long long total=(long long)nums[i]+nums[j]+nums[start]+nums[end];

                if(total>target)  end--;
                else if(total<target) start++;

                else{
                    result.push_back({nums[i],nums[j],nums[start],nums[end]});
                    start++;
                    end--;
                    while(start<end && nums[start]==nums[start-1]) start++;
                    while(start<end && nums[end]==nums[end+1]) end--;
                }
               }
            }
            }
           
        return result;
    }
};