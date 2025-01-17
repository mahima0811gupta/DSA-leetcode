class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
         int n=A.size();

         // he brute force approach iterates over each prefix of the arrays A and B and checks if elements in A    are present in B up to the current index. This involves nested loops, leading to a time complexity of O(n3). The idea is straightforward but inefficient due to repeated comparisons.

        vector<int>result(n);
        for(int i=0;i<n;i++) {
        int count=0;
        for(int A_i=0;A_i<=i;A_i++){
            for(int B_i=0;B_i<=i;B_i++){
                if(B[B_i]==A[A_i]){
                    count++;
                    break;
                    }
                }
            }

        result[i] = count;

        }

        return result;
    }
};