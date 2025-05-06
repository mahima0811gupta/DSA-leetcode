class Solution {
public:
/// the approach is same as we fine connected component in a graph.. here we cant use unordered_set or map ase we ahve to amke it pair of set and in c++ there is no aany comparator for this. we can use ordered_set to store visited scell but in each iteration it taes 0(logn) TC
//so my appraoch is traverse the each cell of the grid and if it is watre skip . if we visit the any cell the mark it 0.
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int cc=0;
        for(int r=0;r<row;r++){
            for(int c=0;c<col;c++){
                 /// if cell is water then skip   and if the cell is already visted we make it 0 
                 if(grid[r][c]=='0')  continue;
                 //// cell is unvisited land   means we get more connected component
                 
                 cc++;
                 
               grid[r][c]='0';  // after visiting the particical cell  mark it zero
                queue<pair<int,int>>q;
                q.push({r,c});
               
               while(!q.empty()){
                auto curr=q.front();
                q.pop();
                ////  go to the all the unvisited member of currnode
                int currow=curr.first;
                int curcol=curr.second;

                int delrow[4] = {-1, 0, 1, 0};
                int delcol[4] = {0, 1, 0, -1};


                 for(int i=0;i<4;i++){
                    int rs=currow+delrow[i];
                    int cs=curcol+delcol[i];

                    if(rs>=0 && rs<row && cs>=0 && cs<col && grid[rs][cs]=='1'){
                        q.push({rs,cs});
                        grid[rs][cs]='0';
                    }
                 }

               }
           
            }
        }

        return cc;
    }
};