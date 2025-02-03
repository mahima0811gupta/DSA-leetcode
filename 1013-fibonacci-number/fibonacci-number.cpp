class Solution {
public:
vector<int>dp;
    int fib(int n) {
         if(n==0||n==1) return n;
          int a=0;
          int b=1;
          int c;
          for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
          }
          return c;
    }
};