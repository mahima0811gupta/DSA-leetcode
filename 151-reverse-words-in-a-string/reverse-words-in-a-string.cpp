class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
       reverse(s.begin(),s.end());
       string ans="";
       for(int i=0;i<n;i++){
        if(s[i]==' ')  continue;
        string word="";
        while(i<n && s[i]!=' '){
           word+=s[i];
           i++;
        }
        reverse(word.begin(),word.end());
        ans+=word+" ";


        }
         return ans.substr(0,ans.length()-1);
    }
};