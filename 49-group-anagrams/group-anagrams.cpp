class Solution {
public:
   
    
    string generate(string &s){
        int count[26]={0};
    for(auto ch:s)
    {
        count[ch-'a']++;
    }
     string  new_s=" ";
    for(int i=0;i<26;i++){
      
        if(count[i]>0){
        new_s+=string(count[i],i+'a');
        }
    }
    
     return new_s;
    }
    
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    unordered_map<string,vector<string>>mp;
    
    
    
    // iterate the loop over the strs
         for(auto s:strs){
     string temp=s; // s is original srings ,jo changes krenge wo temp me krenge jisse 
                        //jb original use krna ho to s se use kr le
    string new_s=generate(s);
    mp[new_s].push_back(s);
    }  //yaha pr newword jo nikla h wo key h jo original string ko store kra h
    vector<vector<string>>ans;
   //av map me ietarte krke second wali mtlb orinal values ko push kro 
   for(auto it:mp){
   ans.push_back(it.second);

   }
   return ans;

    }
};