class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
         sort(nums.begin(), nums.end());
        int mindif=INT_MAX;
        int closestsum=0;
        for(int i=0;i<n-2;i++){
           int s=i+1,e=n-1;
           while(s<e){
            int sum=nums[i]+nums[s]+nums[e];
            int diff= abs(target-sum);
            if(diff<mindif){
                mindif=diff;
                closestsum=sum;
            }
            if(sum==target) return sum;
            else if(sum<target) s++;
            else 
            e--;
             
           }

        }
        return closestsum;
    }
};