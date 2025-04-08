class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();

        stringstream SS(s);
        
        string token=" ";
        string result=" ";

        while(SS>>token){
            reverse(token.begin(),token.end());

            result+=token+" ";
        }


        return result.substr(1,result.length()-2);
    }
};