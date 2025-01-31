class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }

      for( auto st:t){
           mp[st]--;
      }
      for(auto x:mp){
        if(x.second!=0)
        return false;
      }
     return true;
    }
};