class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               int start=j+1;
               int end=n-1;
               while(start<end){
                long long total=(long long)nums[i]+nums[j]+nums[start]+nums[end];

                if(total>target)  end--;
                else if(total<target) start++;

                else{
                    s.insert({nums[i],nums[j],nums[start],nums[end]});
                    start++;
                    end--;
                }
               }
            }
            }
            for(auto it:s){
                result.push_back(it);
            }
        
        return result;
    }
};