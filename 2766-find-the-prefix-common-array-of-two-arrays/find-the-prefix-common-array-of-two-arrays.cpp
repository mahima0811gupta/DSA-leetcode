class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        //The optimal approach leverages a hash map to track the frequency of elements from both arrays. When an
         //element's frequency reaches 2, it indicates it is common in the prefix. This approach avoids 
         //redundant checks and achieves a linear time complexity of O(n), making it the most efficient solution.
      int n=A.size();
      unordered_map<int,int>mp;
      vector<int>ans(n);
      int cnt=0;
      for(int i=0;i<n;i++){
      mp[A[i]]++;
      if( mp[A[i]]==2){
        cnt++;
      }
       mp[B[i]]++;
      if( mp[B[i]]==2){
        cnt++;
      }
      ans[i]=cnt;


      }
      return ans;
    }
};