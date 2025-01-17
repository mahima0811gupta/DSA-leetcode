class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        //This approach uses two boolean arrays to track which numbers have appeared in A and B up to
        // the current index. For each prefix, it checks all numbers to count common elements.
        // While still checking all numbers for each prefix, the use of auxiliary arrays 
        //reduces the complexity to O(n2).
        int n=A.size();
        vector<int>ans(n);
        vector<bool>ispresentinA(n+1,false);
        vector<bool>ispresentinB(n+1,false);
        for(int i=0;i<n;i++){
            int cnt=0;
               ispresentinA[A[i]]=true;
               ispresentinB[B[i]]=true;
               for(int j=0;j<=n+1;j++){
                if( ispresentinA[j]==true && ispresentinB[j]==true){
                    cnt++;
                }
               }
               ans[i]=cnt;
        }
        return ans;
    }
};