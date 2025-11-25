class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n=arr.size();
        int first=-1;
        int last=-1;
        // first occurance

        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;

            if(arr[mid]==target){
              first=mid;
              e=mid-1;
            }
            else if(arr[mid]>target)
              e=mid-1;
              else
              s=mid+1;
        }
         // first occurance

         s=0;
         e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;

            if(arr[mid]==target){
              last=mid;
              s=mid+1;
            }
            else if(arr[mid]>target)
              e=mid-1;
              else
              s=mid+1;
        }

        return {first,last};
    }
};