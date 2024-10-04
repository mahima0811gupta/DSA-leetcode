class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, cnt1 = 0;
        int candidate2 = 0, cnt2 = 0;
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (nums[i] == candidate1) {
                cnt1++;
            } else if (nums[i] == candidate2) {
                cnt2++;
            } else if (cnt1 == 0) {
                candidate1 = nums[i];
                cnt1 = 1;
            } else if (cnt2 == 0) {
                candidate2 = nums[i];
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        int cntt1 = 0, cntt2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == candidate1) cntt1++;
            if (nums[i] == candidate2) cntt2++;
        }

    
        if (cntt1 > n / 3) ans.push_back(candidate1);
        if (cntt2 > n / 3 && candidate2 != candidate1) ans.push_back(candidate2);

        return ans;
    }
};
