class Solution {
public:
    int maxElement(vector<int>& piles){
        int ans = INT_MIN;
        for(int pile : piles){
            ans = max(ans,pile);
        }
        return ans;
    }
    bool f(vector<int>& piles, int h,int k){
        long long sum = 0;
        for(int pile : piles){
            if(pile%k==0){
                sum+=(pile/k);
            }
            else{
                sum+=((pile/k)+1);
            }
        }
        return (sum<=h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxElement(piles);
        if(h==piles.size()){return high;}
        while(low<high){
            int mid = low + (high-low)/2;
            if(f(piles,h,mid)){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};