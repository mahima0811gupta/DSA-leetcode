class Solution {
public:   //tc-nlogn      //sc-o(1)
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
         vector<vector<int>>result;
        for(int i=0;i<n;i++){
            
            int start=i+1;
            int end=n-1;
            while(start<end){
                int total=nums[i]+nums[start]+nums[end];
                if(total<0)
                    start++;
                else if(total>0)   end--;
                else{
                     s.insert({nums[i],nums[start],nums[end]});
                    
                    start++;
                    end--;
                }
                }
            }

            for(auto &it:s){
                result.push_back(it);
            }
            return result;
        }
    
};