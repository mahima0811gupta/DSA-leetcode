class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        vector<vector<int>>dp(n+2,vector<int>(n+2));
//dp[i][j] tells the lps of s[i....j]
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }

        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j=i+L-1;     
                if(s[i]==s[j]){
                    dp[i][j]=2+dp[i+1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
                }
            }
        }

        return dp[0][n-1];
    }
};