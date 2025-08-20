class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
        pre[0]=1;
        int p=1;
        for(int i=1;i<n;i++){
          pre[i]=p*nums[i-1];
          p=pre[i];
        }
    
    p=1;
        for(int i=n-1;i>=0;i--){
          pre[i]=p*pre[i];
          p*=nums[i];
         
        }
      
      
return pre;
    }
};