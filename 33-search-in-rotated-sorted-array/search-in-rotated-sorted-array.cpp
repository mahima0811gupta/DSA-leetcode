class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0;
        int e=n-1;

        while(s<=e){

            int mid=s+(e-s)/2;
           if(arr[mid]==target)
              return mid;
            ////// search kro ki lefi half sorted  ya right

            /// if left halft sorted
            if(arr[s]<=arr[mid]){

                /// av dekho target exist krta h ya nhi
                if(arr[s]<=target && target<=arr[mid]){
                    e=mid-1;
                }
                else
                   s=mid+1;
            }
            // mtlb right wala sorted hai..
            else
            {
                if(arr[mid]<=target && target<=arr[e]){
                    s=mid+1;
                }
                    else
                    e=mid-1;
                }
        }
            return -1;
    }
};