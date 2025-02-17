class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int flips=0;
        int maxlen=0;
        int n=nums.size();
        while(j<n){

        if(nums[j]==1) j++;
        else   //nums[i]==0
        {
        if(flips<k){
            flips++;
            j++;}
        else // flips==k
         { maxlen=max(maxlen,j-i);  
        while(nums[i]==1) i++;
        i++;
        j++;
        }
        }
        
        }
        maxlen=max(maxlen,j-i);  
        return maxlen;
    }
};