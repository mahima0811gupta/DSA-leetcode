class Solution {
public:
  vector<vector<int>>directions{{1,0},{0,1},{1,1},{-1,1},{-1,-1},{-1,0},{0,-1},{1,-1}};
    typedef pair<int,pair<int,int>>P;
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
      int m=grid.size();
      int n=grid[0].size();
      if(m==0 || n==0 || grid[0][0]!=0)  return -1; 
      vector<vector<int>>result(m,vector<int>(n,INT_MAX));

      priority_queue<P,vector<P>,greater<P>>pq;

      pq.push({0,{0,0}});
      result[0][0]=0;

      while(!pq.empty()){
            int dist=pq.top().first;
            pair<int,int>node=pq.top().second;
            pq.pop();

            int x=node.first;
            int y=node.second;

            for(auto &dir:directions){
                int x_=x+dir[0];
                int y_=y+dir[1];
                int d=1;


                if(x_>=0 && x_<m && y_ >=0 && y_<n && dist+d<result[x_][y_] && grid[x_][y_] == 0){
                    pq.push({dist+d,{x_,y_}});
                    
                    result[x_][y_]=dist+d;
                }

            }

      }


      if(result[m-1][n-1] == INT_MAX)
            return -1;
        
        return  result[m-1][n-1]+1;
    }
};