class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        priority_queue<vector<int>,vector<vector<int>>,greater<>>pq;
        for(int i=0;i<n;i++){
           pq.push({matrix[i][0],i,0});
        }
        int ans=-1;
        int cnt=0;
        while(cnt<k && !pq.empty()){
            auto curr=pq.top();
            pq.pop();

            ans=curr[0];
            cnt++;

            int indx=curr[1];
            int eleindx=curr[2];


            if(eleindx+1<matrix[indx].size()){
                pq.push({matrix[indx][eleindx+1],indx,eleindx+1});
            }
        }

        return ans;
    }
};