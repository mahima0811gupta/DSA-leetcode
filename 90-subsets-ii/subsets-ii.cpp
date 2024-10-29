class Solution {
public:


vector<vector<int>>result;
   void solve(vector<int>& nums,int index,vector<int>&temp){
    if(index>=nums.size()){
        
        result.push_back(temp);   
        return;  
    }
    
         
    //backtracking 
    //do 
    temp.push_back(nums[index]);
    //explore
    solve(nums,index+1,temp);
    /// not take wala case 
    temp.pop_back();
    
   
    while (index + 1 < nums.size() && nums[index] == nums[index + 1]) {
            index++;
        }
          solve(nums,index+1,temp);
    }

   
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<int>temp;
         sort(nums.begin(), nums.end());
        solve(nums,0,temp);
        return result;
    }
};