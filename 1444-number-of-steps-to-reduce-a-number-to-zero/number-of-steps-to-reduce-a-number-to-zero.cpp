class Solution {
public:
     
    int step(int &num, int cnt){
        if (num==0) return cnt;

        if(num%2==0) {
            num=num/2;
            return step(num,cnt+1);
        }
        else{
            num=num-1;
             return step(num,cnt+1);
        }

    }
    int numberOfSteps(int num) {
        return step( num,0);
    }
};