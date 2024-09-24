class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      // pehle iterate the loop and create temp val that store each string   
      //then sort the temp
      //now store the temp as a key(as temp is sorted) and its value all the anagram that present in
      //string
      unordered_map<string,vector<string>>mp;
      vector<vector<string>>ans;
      for(auto str:strs) {
    string temp=str;

      sort(begin(temp),end(temp));
      mp[temp].push_back(str);
      }
      for(auto it:mp){
      ans.push_back(it.second);}
      return ans;
    } 
};