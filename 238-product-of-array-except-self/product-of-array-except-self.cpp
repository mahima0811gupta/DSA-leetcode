class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
         vector<int>ans(n);

        pre[0]=1;
        int p=1;
        suf[n-1]=1;
       int s=1;
        for(int i=1;i<n;i++){
          pre[i]=p*nums[i-1];
          p=pre[i];
        }

        for(int i=n-2;i>=0;i--){
          suf[i]=s*nums[i+1];
          s=suf[i];
        }
      
       for(int i=0;i<n;i++){
        ans[i]=pre[i]*suf[i];
       }
return ans;
    }
};