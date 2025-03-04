class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)   return 0;

        if(n==1)   return 1;

        while(n>1){
            if(n%2!=0) return false;
            n/=2;
        }

        return 1;
    }
};