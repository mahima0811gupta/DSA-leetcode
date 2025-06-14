class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
       //better approach is
       //we make 2 array to store the index of zero row nd index of zero col
       //intially we set false to array
       /// if we get the row/col indx zero then that row nd col true
       vector<bool>row(r,false);
       vector<bool>col(c,false);
       for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
           if(matrix[i][j]==0){
                row[i]=true;
                col[j]=true;

           }
        }
       }
       ///again traversing the matrix     if we find row/col indx true then make that index is 0
        for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
            if(row[i]==true || col[j]==true){
                matrix[i][j]=0;
            } 
           }
        }
    }
};