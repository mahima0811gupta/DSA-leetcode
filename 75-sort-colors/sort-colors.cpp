class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0,cnt2=0,cnt0=0;
        for(int i=0;i<n;i++){
          if(nums[i]==0) cnt0++;
          else if(nums[i]==1)  cnt1++;
          else 
          cnt2++;
        }
        int indx=0;
        for(int i=0;i<cnt0;i++){
            nums[indx++]=0;
        }

        for(int i=0;i<cnt1;i++){
            nums[indx++]=1;
        }
         for(int i=0;i<cnt2;i++){
            nums[indx++]=2;
        }
    }
};