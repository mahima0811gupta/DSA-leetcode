class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ///buffer flow can happen as the k can be larger than arr size
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};