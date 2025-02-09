class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int flip=0;
        int len=INT_MIN;
        int maxLen=INT_MIN;
        while(j<n){
              if(nums[j]==1)          j++;
              else{          //nums[j]==0
                   if(flip<k){
                     flip++;
                     j++;
                      }
                 else {  //flip==k
                 //calculate length
                 len=j-i;
                 maxLen=max(len,maxLen);
                // i kp just uske aage wale 0 se ek indx aage le jao 
                while(nums[i]==1) i++;  
                //after this 100% nums[i]=0
                i++;
                j++;
                 
              }
              }
        }
     len=j-i;
    maxLen=max(len,maxLen);

         return maxLen;



    }
};