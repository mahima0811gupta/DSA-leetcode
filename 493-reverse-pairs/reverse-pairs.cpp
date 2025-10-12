class Solution {
public:

    int merge(vector<int>& nums,int l,int mid,int r){
          int left=l;
          int right=mid+1;
          int cnt=0;
          vector<int>temp;
          while(left<=mid && right<=r){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else if(nums[left]>nums[right]){
                temp.push_back(nums[right]);
                right++;
            }
          }
          while(left<=mid){
            temp.push_back(nums[left]);
                left++;
          }
          while(right<=r){
            temp.push_back(nums[right]);
                right++;
          }
          for (int i = l; i <= r; i++) {
            nums[i] = temp[i - l];
        }

          return cnt;
    }

    int cntreverse(vector<int>& nums,int l,int mid,int r){
         int right = mid + 1;
    int cnt = 0;
    for (int i = l; i <= mid; i++) {
          while (right <= r && (long long)nums[i] > 2LL * nums[right])  right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
    }
    int mergesort(vector<int>& nums,int l,int r){
        if(l>=r) return 0;
        int cnt=0;
        int mid=l+(r-l)/2;
        cnt+=mergesort(nums,l,mid);
        cnt+=mergesort(nums,mid+1,r);
        cnt+=cntreverse(nums,l,mid,r);
        merge(nums,l,mid,r);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        return mergesort(nums,l,r);
    }
};