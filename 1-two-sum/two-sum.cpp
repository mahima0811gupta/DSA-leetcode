class Solution {
public:

///using hashmap in 0(n) time complexity...  we store key and index pair in map
    vector<int> twoSum(vector<int>& nums, int target) {
   vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(!mp.empty() && mp.find(rem)!=mp.end()){
                 ans.push_back(i);
            ans.push_back(mp[rem]);
            }  
        else
        // hai equal
        {
             mp[nums[i]]=i;
        }

        }
return ans;
    }
};