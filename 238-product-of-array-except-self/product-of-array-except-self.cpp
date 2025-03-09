class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prev(n);
        vector<int>suff(n);
        vector<int>ans(n);

        /// finding pre

        int p=nums[0];
        prev[0]=1;
        for(int i=1;i<n;i++){
            prev[i]=p;
            p*=nums[i];
        }

        /// fining
         p=nums[n-1];
         suff[n-1]=1;
         for(int i=n-2;i>=0;i--){
            suff[i]=p;
            p*=nums[i];
         }
          for(int i=0;i<n;i++){
            ans[i]=prev[i]*suff[i];
          }
        
        return ans;
    }
};