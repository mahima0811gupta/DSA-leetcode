class Solution {
public:


   //tc-3n  sc-n
//    For any bar i, the amount of water that can be trapped above it depends on:
// The highest bar on its left (leftMax[i])
// The highest bar on its right (rightMax[i])
// The trapped water at index i =
// min(leftMax[i], rightMax[i]) - height[i]




// We use two prefix arrays:
// leftMax[i] → stores the tallest bar height to the left of i
// rightMax[i] → stores the tallest bar height to the right of i
// Then, in one more loop, we apply the formula for all indices.

    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lmax(n,0),rmax(n,0);
        int ans=0;
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            lmax[i]=max(lmax[i-1],height[i]);
        }

         for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],height[i]);
        }
        
        for(int i=0;i<n;i++){
            ans+=min(lmax[i],rmax[i])-height[i];
        }
return ans;
    }
};