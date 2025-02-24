class Solution {
public:
    string reverseWords(string s) {
        stringstream SS(s);
        string token="";
        string result="";

        while(SS>>token){
    
       result=token+" "+result;


        }
        return result.substr(0,result.length()-1);
    }
};