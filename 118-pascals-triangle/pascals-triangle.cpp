class Solution {
public:
    vector<vector<int>> generate(int numRows) {
          vector<vector<int>>result(numRows);
        for(int row=0;row<numRows;row++){
            vector<int>vec(row+1,1);
            for(int step=1;step<vec.size()-1;step++){
                vec[step]=result[row-1][step-1]+result[row-1][step];
            }
            result[row]=vec;

        }
        return result;
        
    }
};