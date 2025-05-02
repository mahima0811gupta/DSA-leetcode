class Solution {
public:
    int dp[1001][1001];
    int LCS(string &s,int i,int j){
        //base case
        if(i>j)  return 0;
        if(i==j)   return 1; //one character
        if(dp[i][j]!=-1)  return dp[i][j];
        if(s[i]==s[j]){
            return dp[i][j]=2+LCS(s,i+1,j-1);
        }
        else
           return dp[i][j]=max(LCS(s,i+1,j),LCS(s,i,j-1));
    }
    int longestPalindromeSubseq(string s) {
        memset(dp,-1,sizeof(dp));
        return LCS(s,0,s.length()-1);
    }
};