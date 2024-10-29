class Solution {
public:
vector<vector<int>>result;
   void solve(vector<int>& nums,int i,vector<int>&temp){
    if(i>=nums.size()){
        result.push_back(temp);   
        return;  
    }

    //backtracking 
    //do 
    temp.push_back(nums[i]);
    //explore
    solve(nums,i+1,temp);

/// not take wala case 
    temp.pop_back();
    solve(nums,i+1,temp);
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        solve(nums,0,temp);
        return result;
    }
};