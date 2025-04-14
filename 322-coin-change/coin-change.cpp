class Solution {
public:
vector<int>dp;


   int f(vector<int>& coins, int amount){
   
    if(amount==0)  return 0;
    int ans=INT_MAX;
    if(dp[amount]!=-1)  return dp[amount];
    for(int i=0;i<coins.size();i++){
        if(amount-coins[i]>=0){
                 ans=min(ans+0LL,f(coins,amount-coins[i])+1LL);
        }
    }
    //// yaha LL isliye add kea h kyuki if ans==INT_MAx hora h aur hum +1 add krenge to overfolw ho jyega
    return dp[amount]=ans;
   }
    int coinChange(vector<int>& coins, int amount) {
        dp.clear();
        dp.resize(10005,-1);
  int result = f(coins, amount);
        return result == INT_MAX ? -1 : result;
    }
};