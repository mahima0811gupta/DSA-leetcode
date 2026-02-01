class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        int score=nums[0];
        //finfd fisrt and sec min
        int fmin=INT_MAX;
        int smin=INT_MAX;
        for(int i=1;i<n;i++){
            if(nums[i]<fmin){
                smin=fmin;
                fmin=nums[i];
            }
            else if(nums[i]<smin){
                smin=nums[i];
            }
        }
        return score+smin+fmin;
    }
};