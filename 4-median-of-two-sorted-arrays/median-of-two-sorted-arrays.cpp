class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int k=0;
        int n=nums1.size();
        int m=nums2.size();
        int s=m+n;
        int ans1,ans2;

        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                if(k==s/2)  
                   ans1=nums1[i];
                if(k==s/2-1) 
                    ans2=nums1[i];
                i++;
                k++;
            }
            else
            {
                   if(k==s/2) 
               ans1=nums2[j];
                if(k==s/2-1) 
               ans2=nums2[j];
                j++;
                k++;
            }
         
        }
        while(i<n){
              if(k==s/2)  
                   ans1=nums1[i];
                if(k==s/2-1) 
                     ans2=nums1[i];
                i++;
                k++;
        }
         while(j<m){
            
                   if(k==s/2) 
             ans1=nums2[j];
                if(k==s/2-1) 
            ans2=nums2[j];
                j++;
                k++;
            
        }
       if(s%2!=0) //odd
         return ans1;

       return (ans1+ans2)/2.0;
    }  
};