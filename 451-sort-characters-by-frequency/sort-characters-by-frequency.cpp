class Solution {
public:
    string frequencySort(string s) {
        //// fisrt
        string result="";
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }

        /// store map in vec
        typedef pair<char,int>p;
        vector<p>vec(mp.begin(),mp.end());
       
      auto lamda=[&](p&p1 , p&p2){
          return p1.second>p2.second;
      };
       sort(vec.begin(),vec.end(),lamda);
      

     for(auto st:vec){
           result+=string(st.second,st.first);
     }
        return result;
    }
};