class Solution {
public:
    int maxDifference(string s) {
        vector<int>vec(26,0);
        int mini=INT_MAX;
        int maxi=INT_MIN;
      for(auto &it: s){
        vec[it-'a']++;
      }

      for(int i=0;i<26;i++){
        if(vec[i]==0) continue;

        if(vec[i]%2!=0)   //odd
        maxi=max(maxi,vec[i]);

        else
        mini=min(mini,vec[i]);
      }

      int diff=maxi-mini;

      return diff;
    }
};