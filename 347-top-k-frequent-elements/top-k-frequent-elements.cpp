class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         int n=nums.size();
         unordered_map<int,int>mp;
         for(auto it:nums){
            mp[it]++;
         }


         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
         for(auto i:mp){
            pq.push({i.second,i.first});
         }
            
        while(pq.size()>k){
            pq.pop();
        }


        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }


        return ans;
    }
};