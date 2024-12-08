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
            int ist=pq.top();
            pq.pop();
            int sec=pq.top();
             pq.pop();
             int sub=abs(ist-sec);
             if(sub!=0)
             pq.push(sub);
        }
        return pq.empty() ? 0 : pq.top();
     
    }
};