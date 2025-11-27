class Solution {
public:

    bool CanEat(vector<int>& piles,int givenspeed,int h){
        int actualspeed=0;
        for(auto x:piles){
            actualspeed+=x/givenspeed;
           if(x%givenspeed!=0) actualspeed++;
        }
        return actualspeed<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(begin(piles),end(piles));
        while(l<r){
            int mid=l+(r-l)/2;

            if(CanEat(piles,mid,h))
            r=mid;
            else
            l=mid+1;
        }

        return l;
    }
};