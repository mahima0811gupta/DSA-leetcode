class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
    unordered_map<int,int>mp;
    for(int i=0;i<=n;i++){
        mp[i]++;
    }

    for(auto num:nums){
        mp.erase(num);
    }
           return mp.begin()->first;
    }
};