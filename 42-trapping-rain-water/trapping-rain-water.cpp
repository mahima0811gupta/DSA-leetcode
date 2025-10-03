class Solution {
public:
// Two-Pointer Approach (O(n) Time, O(1) Space)
// Instead of storing arrays, use two pointers (left, right) and two variables (leftMax, rightMax).
// Move the pointer with the smaller height and calculate trapped water on the fly.
    int trap(vector<int>& height) {
        int n=height.size();
        int lmax=height[0];
        int rmax=height[n-1];
         int ans=0;
        int s=0;
        int e=n-1;
        while(s<=e){
            lmax=max(lmax,height[s]);
            rmax=max(rmax,height[e]);

            if(lmax<rmax)   //deciding factor
            {
              ans+=lmax-height[s];
              s++;
            }
            else{
                ans+=rmax-height[e];
              e--;
            }

        }
        return ans;

    }
};