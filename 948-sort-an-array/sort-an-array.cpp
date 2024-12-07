class Solution {
public:
vector<int>ans;
 priority_queue<int,vector<int>,greater<int>>pq;
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
        }

        return ans;
        
    }
};