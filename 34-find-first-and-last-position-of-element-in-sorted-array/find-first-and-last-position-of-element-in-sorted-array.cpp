class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        int first=-1;
        int sec=-1;

        /// first occurance
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==target){
             first=mid;
             e=mid-1;
            }
            else if(arr[mid]>target) e=mid-1;
            else
            s=mid+1;

        }
        
        /// sec ccurance
        s=0;
        e=n-1;
         while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==target){
             sec=mid;
             s=mid+1;
            }
            else if(arr[mid]>target) e=mid-1;
            else
            s=mid+1;

        }
        return {first,sec};
    }
};