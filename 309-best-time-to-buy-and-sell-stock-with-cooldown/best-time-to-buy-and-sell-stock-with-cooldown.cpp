class Solution {
public:
 vector<vector<int>>dp;
   int f(vector<int>&prices,int i,bool on){

   if(i>=prices.size())  return 0;

     if(dp[i][on]!=-1)   return dp[i][on];
     //skip the day
     int ans=0;
     ans=f(prices,i+1,on);
    
     if(on==true)   //transactioj is hold  //we can sell
     {
        ans=max(ans,f(prices,i+2,false)+prices[i]);
     }
     else{
        ans=max(ans,f(prices,i+1,true)-prices[i]);
     }

     return dp[i][on]=ans;
   }
    int maxProfit(vector<int>& prices) {
        dp.clear();
        int n=prices.size();
        dp.resize(n+2,vector<int>(2,-1));

        return f(prices,0,false);

        
    }
};