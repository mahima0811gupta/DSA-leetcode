class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos,neg;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else
                pos.push_back(nums[i]);
        }

       int minus=0;
       int plus=0;
       for(int i=0;i<n;i++){
        ans[i]=pos[plus++];
        i++;
        ans[i]=neg[minus++];
       }

       return ans;
    }
};