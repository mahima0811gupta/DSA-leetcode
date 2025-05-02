class Solution {
public:
    /// time c=n3
    int dp[1001][1001];
    bool checkpalindrome(int i,int j,string &s){
      //base case
      if(i>j)   return true; /// sbcheck kr liya
      if(dp[i][j]!=-1)   return dp[i][j];
      if (s[i]==s[j])  return dp[i][j]=checkpalindrome(i+1,j-1,s);
        
      return false;
    }
     int cnt=0;
    int countSubstrings(string s) {
        int n=s.length();
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
           
            for(int j=i;j<n;j++){
               if (checkpalindrome(i,j,s)==true)   cnt++;
            }
        }


        return cnt;
    }
};