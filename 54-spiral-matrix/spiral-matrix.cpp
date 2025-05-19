class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>ans;
          int sr=0,sc=0,er=m-1,ec=n-1;
          //condition
        while(sr<=er && sc<=ec){
            //top  : sr is fix
            for(int i=sr;i<=ec;i++){
                ans.push_back(matrix[sr][i]);
            }

            //right  :ec is fix
            for(int j=sr+1;j<=er;j++){
                ans.push_back(matrix[j][ec]);
            }
            //bottom  : er is fix
           for(int i=ec-1;i>=sc;i--){
            if(sr==er)  break;
            ans.push_back(matrix[er][i]);
           }


            //left : sc is fix
            for(int j=er-1;j>sr;j--){
                if(sc==ec)  break;
                   ans.push_back(matrix[j][sc]);
            }
            sr++,sc++,er--,ec--;
        }
           return ans; 
    }
};