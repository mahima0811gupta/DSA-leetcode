class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
       for(auto &val:arr) {
        int rem=(val%k+k)%k;
        mp[rem]++; 
       }
       if(mp[0]%2!=0)
       return false;
      for(int rem=1;rem<=k/2;rem++){
        int counthalf=k-rem;
        if(mp[counthalf]!=mp[rem])
        return false;
      }
      return true;
    }
};