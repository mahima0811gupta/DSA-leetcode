class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
     
         vector<vector<int>>result;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int start=i+1;
            int end=n-1;
            while(start<end){
                int total=nums[i]+nums[start]+nums[end];
                if(total<0)
                    start++;
                else if(total>0)   end--;
                else{
                     result.push_back({nums[i],nums[start],nums[end]});
                     start++;
                     end--;

                      while(start<end && nums[start]==nums[start-1]) start++;
                      while(start<end && nums[end]==nums[end+1]) end--;
                }
                }
            }

           
            return result;
        }
    
};