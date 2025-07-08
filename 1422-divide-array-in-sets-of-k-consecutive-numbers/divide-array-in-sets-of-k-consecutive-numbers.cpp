class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
          int n = nums.size();
        if (n % k!= 0) return false;
             //use ordered map to store the value nd their frequency
             map<int,int>mp;
             for (auto it:nums){
                mp[it]++;
             }


             while(!mp.empty()){
                int curr=mp.begin()->first;
                for(int i=0;i<k;i++){
                    if(mp[curr+i]==0)  {
                        mp.erase(curr+i);
                     return false;
                    }
                    mp[curr+i]--;
                if (mp[curr + i] == 0) {
                    mp.erase(curr + i);
                }
                }
                }


             return true;
    }
    
};