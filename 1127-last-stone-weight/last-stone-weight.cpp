class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int n=stones.size();
        int sub=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
             pq.pop();
           if(x!=y)
             pq.push(x-y);
        } 
        if(pq.size()==1)
        return pq.top();
        return 0;
    }
};