class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         map<int,int>mp;
         for(auto i:nums) {
            if(i>0)
         mp[i]++;
         }
        int j=1;
        while(1){
        if(mp.find(j)==mp.end()){
        return j;
        }
        
        j++;

      
    }}
};
