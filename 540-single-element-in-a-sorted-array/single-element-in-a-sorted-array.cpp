class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
        mp[it]++;

        for(auto st:mp){
        if(st.second==1)
        return st.first;
        }
        return 0;
    }
};