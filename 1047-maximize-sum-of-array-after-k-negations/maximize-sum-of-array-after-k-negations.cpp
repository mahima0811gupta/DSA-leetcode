class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());  //o(n)
       // array ko priority quue me convert kar liya

       while(k--){
        int ele=pq.top();
        if(ele==0){
            break;
        }
        pq.pop();
        pq.push(-ele);
       }
       int maxsum=0;
       while(!pq.empty()){
       maxsum+=pq.top();
       pq.pop();
       }
       return maxsum;


    }
};