#define ll long long int 
class Solution {
public:

    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        //here we will make vector of map to store the differnce of each index from start and its frequency(count)
        vector<unordered_map<ll,ll>>mp(n);
        
        ll ans=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                ll diff=(ll)nums[i]-(ll)nums[j];
                if(mp[j].find(diff)!=mp[j].end()){
                    // element found
                      ans+=mp[j][diff];
                }
                mp[i][diff]+=mp[j][diff]+1;
            }
        }
        return (int)ans;
    }
};