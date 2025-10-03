class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;  //value--->indx

        for(int i=0;i<n;i++){
            int a=target-nums[i];
            if(mp.find(a)!=mp.end()){
                return {i,mp[a]};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};