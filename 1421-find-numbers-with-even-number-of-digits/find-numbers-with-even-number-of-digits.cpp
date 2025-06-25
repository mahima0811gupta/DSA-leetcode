class Solution {
public:


    int totaldigit(int n){
        int cnt=0;
        while(n!=0){
            int dig=n%10;
            cnt++;
            n=n/10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
           if(totaldigit(nums[i])%2==0)
           ans++;

        }
        return ans;
    }
};