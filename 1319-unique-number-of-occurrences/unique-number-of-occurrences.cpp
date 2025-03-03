class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
      unordered_set<int>s;
        for(auto m:mp){
           int val=m.second;

           if(s.find(val)!=s.end()){
        return false;
           }
           else
           {
             s.insert(val);
           }

           
        }

        return true;












        
    }
};