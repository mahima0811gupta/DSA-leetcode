class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pivot=-1;

        ///  find pivot element in the array piche se jo dec ho 
        for(int i=n-2;i>=0;i--){
             if(nums[i]<nums[i+1]){
                pivot=i;
                break;
             }

        }
        if(pivot==-1)   {  
        reverse(nums.begin(),nums.end());
        return;

        }

        /// find next largest elemt from right most to swap with pivot

        for(int i=n-1;i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }

        //// reverse pivot+1 to end
       // reverse(nums.begin()+pivot+1,nums.end());
       int s=pivot+1;
       int e=n-1;
       while(s<=e){
        swap(nums[s++],nums[e--]);
       }
    }
};