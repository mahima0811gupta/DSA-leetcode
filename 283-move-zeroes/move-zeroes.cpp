class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            cnt++;
        }


        int i=0,j=0;
        while(j<n){
            if(nums[j]!=0){
              nums[i]=nums[j];
              i++;
        }
        j++;
        }

        while(cnt--){
            nums[i++]=0;
        }
    }
};