class Solution {
public:

    bool checkpalindrome(int i,int j,string &s){
      //base case
      if(i>j)   return true; /// sbcheck kr liya
      if (s[i]==s[j])  return checkpalindrome(i+1,j-1,s);
        
      return false;
    }
     int cnt=0;
    int countSubstrings(string s) {
        int n=s.length();

        for(int i=0;i<n;i++){
           
            for(int j=i;j<n;j++){
               if (checkpalindrome(i,j,s)==true)   cnt++;
            }
        }


        return cnt;
    }
};