class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0;
        int tens=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five+=1;

            }
            else if(bills[i]==10){
                if(five){
                    tens+=1;
                    five-=1;
                }
                else
                return false;
            }
            else{   //if 20

          
            
                    if(tens && five ){
                tens-=1;
                five-=1;
            }
       else if(five>=3){
                        five-=3;
                    }

            else 
            return false;
            }
        }

        return true;
    }
};