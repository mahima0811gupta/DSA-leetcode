class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m=matrix.size(),n=matrix[0].size();  
        int first=0,last=m*n-1;
        while(first<=last){
           int mid=first+(last-first)/2;
           int i=mid/n;
           int j=mid%n;

           if(matrix[i][j]==target) 
           return true;
           else if(matrix[i][j]<target)
            first=mid+1;
             else
             last=mid-1;
        }
        return false;
    }
}; 