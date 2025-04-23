class Solution {
public:
   vector<int>dp;
    int f(string s,int i){ 
      if(i==s.length())   return 1;   // end tk aa gye h to 1 ans me include hoga
      if(s[i]=='0')   return 0;
      if(dp[i]!=-1)  return dp[i];
      long result=0;
        result=f(s,i+1);
    if(i+1<s.length()){
    if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6')){
        result+=f(s,i+2);
    }
    }
    return dp[i]=result;
    }
    int numDecodings(string s) {
        dp.clear();
        dp.resize(105,-1);
        return f(s,0);
    }
};