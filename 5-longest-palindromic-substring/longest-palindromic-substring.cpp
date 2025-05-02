class Solution {
public:
     int dp[1001][1001];
    bool checkpalindrome(int i,int j,string &s){
      //base case
      if(i>j)   return true; /// sbcheck kr liya
      if(dp[i][j]!=-1)   return dp[i][j];
      if (s[i]==s[j])  return dp[i][j]=checkpalindrome(i+1,j-1,s);
        
      return false;
    }
    string longestPalindrome(string s) {
        int n=s.length();
        int maxi=INT_MIN;
         memset(dp,-1,sizeof(dp));
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