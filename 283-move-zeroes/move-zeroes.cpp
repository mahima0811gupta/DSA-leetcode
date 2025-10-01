class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int i=0;
        int j=0;
        while(j<n){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
            }
            else{
                ///////zero h
                 cnt++;
            }
            j++;
        }
        while(cnt){
            nums[i]=0;
            i++;
            cnt--;
        }
      
    }
};