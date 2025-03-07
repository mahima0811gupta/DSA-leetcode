class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<int,vector<int>>>pq;
        for(vector<int>v:points){
        int x=v[0],y=v[1];
        int dis=x*x+y*y;
        pq.push({dis,v});
        if(pq.size()>k)
        pq.pop();
        
        }
          vector<vector<int>>ans;
        while(!pq.empty()){
            vector<int>v=pq.top().second;
           ans.push_back(v);
           pq.pop();
        }
   return ans;
    }
};