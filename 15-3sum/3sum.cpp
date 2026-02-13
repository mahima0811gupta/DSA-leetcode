class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum=-nums[i];
            int s=i+1,e=n-1;
            while(s<e){
                if(nums[s]+nums[e]==sum){
                 ans.push_back({nums[i],nums[s],nums[e]});
                 s++,e--;
                  while(s<n && nums[s]==nums[s-1])
                     s++;
                 while(e>=0 && nums[e]==nums[e+1])         
                    e--;
                 
                }
                 
                 else if(nums[s]+nums[e]<sum)  s++;
                 else e--;
            }
        }
        return ans;
    }
};