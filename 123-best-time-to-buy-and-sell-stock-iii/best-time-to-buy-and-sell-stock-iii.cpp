class Solution {
public:
 int dp[100005][4][2];
 int f( vector<int>& prices,int i,int k,bool on){
      if(i==prices.size()) return 0;
      if(dp[i][k][on]!=-1)   return dp[i][k][on];
      int ans=INT_MIN;
      //avoide kr diya h skip this
      ans=f(prices,i+1,k,on);
     
      if(on==true){
        //NOT AVOID
        //means  currently holding stock (on == true)
        ans=max(ans,prices[i]+f(prices,i+1,k,false));

        /// after buy the stock do on==false means av sell krna h
      }

      else{
        /// av bechna h  yaha pr ek aur condition chahiye ki set ke liye k >0 hona chhaiye
        if(k>0){
             ans=max(ans,f(prices,i+1,k-1,true)-prices[i]);
        }
      }

      return dp[i][k][on]=ans;
 }
    int maxProfit(vector<int>& prices) {
          memset(dp,-1,sizeof dp);
        return f(prices,0,2,false);
    }
};