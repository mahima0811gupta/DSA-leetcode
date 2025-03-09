class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prev(n);

        /// finding pre

        int p=nums[0];
        prev[0]=1;
        for(int i=1;i<n;i++){
            prev[i]=p;
            p*=nums[i];
        }
        /// fining
         p=nums[n-1];
         for(int i=n-2;i>=0;i--){
            prev[i]*=p;
            p*=nums[i];
         }
     
        
        return prev;
    }
};