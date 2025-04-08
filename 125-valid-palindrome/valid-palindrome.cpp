class Solution {
public:

   bool validpalindrome(char ch){
    return (ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9');
   }

   char to_lowercase(char ch){
    if(ch>='a' && ch<='z')  return ch;
    else
      {
        char temp=ch-'A'+'a';
        return temp;
      }
   }
    bool isPalindrome(string s) {
        vector<char> chars;
        for(auto it:s){
            if(validpalindrome(it)){
            chars.push_back(to_lowercase(it));
            }
        }

        int st=0;
        int e=chars.size()-1;

        while(st<=e){
            if(chars[st]!=chars[e])
            return false;

            else
            {
                st++;
                e--;
            }
        }


        return true;
    }
};