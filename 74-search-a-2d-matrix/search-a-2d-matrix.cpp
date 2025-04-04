class Solution {
public:

 bool searchincol(vector<vector<int>>& mat, int target,int mid){

    // av row to pta h us row ke col me dekho
         int m=mat.size();     //row
        int n=mat[0].size();  
      int startcol=0;
      int endcol=n-1;

      while(startcol<=endcol){
           int colmid=startcol+(endcol-startcol)/2;

           if(mat[mid][colmid]==target)  return true;

           else if(mat[mid][colmid]>target)  endcol=colmid-1;

           else
           startcol=colmid+1;
      }

          return false;
    }
 bool searchMatrix(vector<vector<int>>& mat, int target) {
        /// in this 
    // first we find that row in which target is exist using binary search and then one that row we apply binary search
  int m=mat.size();     //row
  int n=mat[0].size();      //col
  int startrow=0;
  int endrow=m-1;

  while(startrow<=endrow){
    int mid=startrow+(endrow-startrow)/2;
       if(target>=mat[mid][0] && target<=mat[mid][n-1]){
          ////correct row is find where target is exist
             return searchincol(mat,target,mid);
       }
       else if(target<mat[mid][0])  endrow=mid-1;
        else
        startrow=mid+1;

  }
    return false;
    }
};