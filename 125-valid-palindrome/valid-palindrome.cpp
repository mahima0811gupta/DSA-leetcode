class Solution {
public:

    bool validpalindrome(char ch){
        return (ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9');
    }

    char to_lowercase(char ch){
        if(ch>='a'&& ch<='z')
        return ch;
       else{
        char temp=ch+('a'-'A');
        return temp;
        }
    }

    bool isPalindrome(string s) {
        string ans;
         for(int i=0;i<s.length();i++){
             if(validpalindrome(s[i]))
                     ans.push_back(to_lowercase(s[i]));
                  }
    int st=0;
    int e=ans.length()-1;
      while(st<=e){
        if(ans[st]!=ans[e])
        return 0;
        else
        {
            st++;
            e--;
        }
    }
    return 1;
    }
};