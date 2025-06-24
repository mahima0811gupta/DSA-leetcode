class Solution {
public:
    int countPrimes(int n) {
        vector<bool>is_prime(n+1,true);
           int ans=0;
         for(int i=2;i<n;i++){
            if(is_prime[i]) {
            ans++;
            //iske bad i ke sare multiple ko false kr denge as they are no prime
            for(int j=2*i;j<n;j+=i){
                is_prime[j]=false;
            }
            }
           
        }
         return ans;
    }
};