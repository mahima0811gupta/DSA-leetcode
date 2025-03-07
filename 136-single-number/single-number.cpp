class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
        mp[it]++;

        for(auto s:mp){
            if(s.second==1)
            return s.first;
        }
        return -1;
    }
};