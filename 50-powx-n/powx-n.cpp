class Solution {
public:
    double myPow(double x, int n) {

        // if(x==1)   return 1;
        // if(x==0)   return 0;
        // if(n==0)     return 1;


       
        long binaryform=n;
        double ans=1;
              //n is negative h to   x%^-10 ko (1/x)^-(-10)  x=1/x and binaryform ko -binaryform

              if(n<0)  {
                x=1/x;
                binaryform=-binaryform;
              }
        while(binaryform>0){
             /// are binary form ka last bit 1 aata h to ans me add krenge 5 ka                     binary form 101 hota h 5%2==1 aaya ans me x add krnge usse baad x ko x ze multiple lr denge 
 if(binaryform%2==1) {
         ans*=x;
 }
 x*=x;
 binaryform/=2;
        }



       return ans; 
    }
};