class Solution {
public:
    string reverseWords(string s) {
        stringstream SS(s);
        string token="";
        string result="";
         
         while(SS>>token){
          reverse(begin(token),end(token));

          result+=token+" ";

         }

         return result.substr(0,result.length()-1);
    }
};