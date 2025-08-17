class Solution {
public:


    int countt(vector<vector<int>>& matrix, int n,int mid){
       int cnt=0;
       int r=0;
        int c=n-1;


        while(r<n && c>=0){

            if(matrix[r][c]<=mid){
                  cnt+=c+1;
                  r++;
            }
            else{
               
                c--;
            }
        }
           

           return cnt;
    
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int start=matrix[0][0];
        int end=matrix[n-1][n-1];
          int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
          
          int lessequal=countt(matrix,n,mid);

          if(lessequal>=k){
             ans=mid;
             end=mid-1;
          }
          else{
            start=mid+1;
          }
        }
        return ans;
    }
};