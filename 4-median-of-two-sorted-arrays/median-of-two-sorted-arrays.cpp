class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int k=0;
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans(n+m);     //0(m+n)
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                ans[k++]=nums1[i++];
            }
            else
            {
                  ans[k++]=nums2[j++];
            }
        }
        while(i<n){
             ans[k++]=nums1[i++];
        }
         while(j<m){
             ans[k++]=nums2[j++];
        }
        int s=ans.size();
        if(s%2!=0)  //odd
          return ans[s/2];

        return   (ans[s/2]+ans[s/2-1])/2.0;
    }
};