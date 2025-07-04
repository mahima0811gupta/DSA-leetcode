class Solution {
public:
   int gcd(int a, int b) {
        while(a>0 && b>0){
            
            if(a>b)
               a=a%b;
               else
               b=b%a;
        }
        if(a==0) return b;
        
        return a;
    }
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);

            maxi=max(maxi,nums[i]);
        }

        return gcd(mini,maxi);

    }
};