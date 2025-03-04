class Solution {
public:
    bool checkPowersOfThree(int n) {
        //// pehle maximum power nikalenge kitne tab tak jb tak wo n se chota ho example n=12 
        // 3 ki power 0=1;
        // 3 ki power 1=3;
        // 3 ki power 2=9;
        // 3 ki powr 3=27          ye n se bada h to nhi kenhe p=2
           int p=0;
        while(pow(3,p)<=n){
            p++;
        }


        while(n>0){
         if(n>=pow(3,p)){
        
         
            n-=pow(3,p);

        }
       // ek bar pow(3,p)  minus krne pr bhi agr graeter rehta h to pir  wagi pwr(3,p)  use krna pdega pr do baar nhi use kr skte
         if(n>=pow(3,p)){
                    return false;
         }

         p--;
         }
         return true;

    }
};