class Solution {
public:

  bool palindrome(string &s,int st,int e)  {
    while(st<=e){
    if(s[st]!=s[e])
    return false;

    else
    {
        st++;
        e--;
    }
    }
    return true;
  }                                         

    bool validPalindrome(string s) {
        int st=0;
        int e=s.length()-1;
        while(st<=e){

         if(s[st]!=s[e])
          return palindrome(s,st+1,e)||palindrome(s,st,e-1);
         else{
            st++;
            e--;
         }
        }
         return true;
    }
};