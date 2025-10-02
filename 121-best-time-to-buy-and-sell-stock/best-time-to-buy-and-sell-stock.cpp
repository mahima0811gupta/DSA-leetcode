class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //here we can fisrt we can to buy then can e can sell so 
        // To find maximum profit, we assume each day as a selling day.
       // However, we cannot start selling from day 0, because the first day can only be a buying day.
// For each day, we calculate if selling today would give a higher profit than before.
// We also keep updating the best buying price so far.

        int n=prices.size();
        int bestbuys=prices[0];
        int maxprofit=0;
        for(int i=0;i<n;i++){
            if(prices[i]>bestbuys)
              maxprofit=max(maxprofit,prices[i]-bestbuys);
               bestbuys=min(bestbuys,prices[i]);
                      }

                      return maxprofit;

    }
};