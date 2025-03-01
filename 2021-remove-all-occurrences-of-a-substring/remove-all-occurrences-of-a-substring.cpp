class Solution {
public:
    string removeOccurrences(string s, string part) {
        string result="";
        int m=part.length();
        int n=s.length();
        
        for(auto ch:s){
            result.push_back(ch);
        

        while(result.length()>=part.length() && result.substr(result.length()-m)==part){

            result.erase(result.length()-m);
        }
        }

      return result;

    }
};