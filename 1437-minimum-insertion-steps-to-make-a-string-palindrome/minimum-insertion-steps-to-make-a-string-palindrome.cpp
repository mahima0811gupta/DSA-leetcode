class Solution {
public:
  


    int minInsertions(string s) {
        int n=s.length();
        vector<vector<int>>dp(n,vector<int>(n,0));

        for(int i=0;i<n;i++){
        dp[i][i]=0;
        }
        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j=i+L-1;

                if(s[i]==s[j]) 
                dp[i][j]=dp[i+1][j-1];
                else
                dp[i][j]=min(1+dp[i+1][j],1+dp[i][j-1]);
            }
        }

        return dp[0][n-1];
    }
};