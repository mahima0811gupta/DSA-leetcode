class Solution {
public:
   int dp[505][505];


   int f(string &s,int i,int j){
    //base case
    if(i>=j)   return 0;
    if(dp[i][j]!=-1)   return dp[i][j];

    if(s[i]==s[j]){
        return dp[i][j]=f(s,i+1,j-1);
    }
    else{
        return dp[i][j]=min(1+f(s,i+1,j),1+f(s,i,j-1));
    }

   }
    int minInsertions(string s) {
        int n=s.length();
        memset(dp,-1,sizeof(dp));
        return f(s,0,n-1);
    }
};