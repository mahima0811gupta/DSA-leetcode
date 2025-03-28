class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        /// apply lower bound

        int s=0;
        int n=arr.size();
        int e=n-1;
        int ans=n;
        while(s<=e){
            
            int mid=s+(e-s)/2;

            if(arr[mid]>=target){
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }

        return ans;
    }
};