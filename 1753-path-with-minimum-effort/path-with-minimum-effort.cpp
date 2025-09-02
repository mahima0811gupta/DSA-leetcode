class Solution {
public:
  typedef pair<int,pair<int,int>>pi;

  vector<vector<int>>directions{{-1,0},{1,0},{0,-1},{0,1}};
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();

        vector<vector<int>>result(m,vector<int>(n,INT_MAX));
      priority_queue<pi,vector<pi>,greater<pi>>pq;

      pq.push({0,{0,0}});
      result[0][0]=0;

      while(!pq.empty()){

        int diff=pq.top().first;
        
        pair<int,int>cell=pq.top().second;
           int x=cell.first;
           int y=cell.second;
        pq.pop();
           for(auto &dir:directions){
            int x_=x+dir[0];
            int y_=y+dir[1];
           
           if(x_>=0 && x_<m && y_>=0 && y_<n){
              int absdiff=abs(heights[x_][y_] - heights[x][y]);
              int maxidiff=max(diff,absdiff);

              if(result[x_][y_]>maxidiff){
                result[x_][y_]=maxidiff;
                pq.push({maxidiff,{x_,y_}});
              }
           }

           }
      }
     return result[m-1][n-1];
    }
};