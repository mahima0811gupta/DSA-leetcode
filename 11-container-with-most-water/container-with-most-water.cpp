class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int s=0;
        int e=n-1;
        int ans=0;
    
    while(s<e){
            int h = min(height[s], height[e]);     
            int width = e - s;                    
            ans = max(ans, h * width); 
               if (height[s] < height[e])
                s++;
            else
                e--;
        
    }
    return ans;
    }
};