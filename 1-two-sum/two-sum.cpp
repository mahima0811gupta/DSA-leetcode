class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans(2);
        for(int i=0;i<nums.size();i++){
          int a=target-nums[i];
          if(mp.find(a)!=mp.end())
                 {
                    ans[0]=(i);
                    ans[1]=mp[a];
                 }
             else
             {
            mp[nums[i]]=i;

             }    
        }

        return ans;
    }
};