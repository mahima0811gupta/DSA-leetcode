class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=INT_MIN;
        int flip=0;
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]==1){
                j++;
            }
           else     //0 h
            {  if(flip<k){
                   j++;
                flip++;}
                else   // flip==
                {
               maxlen=max(maxlen,j-i);
                  while(nums[i]==1)  i++;  
                    i++;
            j++;
        
            }
            }

        }
        maxlen=max(maxlen,j-i);

        return maxlen;
    }
};