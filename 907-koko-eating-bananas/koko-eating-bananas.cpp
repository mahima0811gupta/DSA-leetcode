// Koko must eat all bananas within h hours. The faster she eats, the fewer hours she needs.
// The key is to notice that the answer lies between 1 and the maximum pile size, and the
// condition (can she finish in h hours?) is monotonic:
// If she can finish at speed k, she can also finish at any faster speed.
// If she cannot finish at speed k, she also cannot finish at any slower speed.
// This monotonic property suggests binary search on the eating speed.


class Solution {
public:


    bool canEatAll(vector<int>& piles,int givenhour,int h){
        int actualhour=0;
        for(auto x:piles){
         actualhour+=x/givenhour;
         if(x % givenhour != 0) actualhour++;
        }

        return actualhour<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int s=1;
       int e=*max_element(begin(piles),end(piles));
       while(s<e){
        int mid=s+(e-s)/2;
        if(canEatAll(piles,mid,h))  //check piche
        e=mid;
        else
        s=mid+1;
       }    
       return s;    
    }
};