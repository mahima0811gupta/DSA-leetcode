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
   int m=0,p=0;
    for(int i=0;i<n-1;i++){
        ans[i]=pos[p++];
        i++;
        ans[i]=neg[m++];

    }
return ans;
    }
};