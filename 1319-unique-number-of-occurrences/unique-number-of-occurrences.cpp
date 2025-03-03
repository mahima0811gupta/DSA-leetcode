class Solution {
public:


/// pehle map me key val pair dal ho then ek set bnano usme m.second only occurance dalo agr wo pehle se prensent h set me mtlb repetion hota return false else dal do set me
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