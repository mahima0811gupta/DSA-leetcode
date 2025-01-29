class Solution {
public:
int mod=1e9+7;
 long long myPow(long long x, long long n) {
        if(n==0) return 1;
        // even
        // x %= mod;
        if(n%2==0)
        return (myPow((x*x)%mod,n/2))%mod;
        else
         return (x*myPow((x*x)%mod,(n-1)/2))%mod;
 }
    int countGoodNumbers(long long n) {
        long long even=n/2+n%2;
        long long odd=n/2;
        long long foreven=myPow(5,even);
        long long forodd=myPow(4,odd);

        long long ans=(foreven*forodd)%mod;
        return ans;
    }
};