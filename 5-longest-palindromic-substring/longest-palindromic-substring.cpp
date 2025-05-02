class Solution {
public:

    bool checkpalindrome(int i,int j,string &s){
      //base case
      if(i>j)   return true; /// sbcheck kr liya
   
      if (s[i]==s[j])  return checkpalindrome(i+1,j-1,s);
        
      return false;
    }

    string longestPalindrome(string s) {
        int n=s.length();
        int maxi=INT_MIN;
        int startindx=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkpalindrome(i,j,s)==true){
                    int len=j-i+1;
                   if(len>maxi){
                    maxi=len;
                    startindx=i;
                   }
                }
            }
        
        }
       return s.substr(startindx,maxi); 
    }
};