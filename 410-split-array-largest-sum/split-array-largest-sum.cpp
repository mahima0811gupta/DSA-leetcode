class Solution {
public:
   bool ispossible(vector<int>& nums, int k, int n,int & mid){
    int split=1; 
    int add=0;
    
    for(int i=0;i<n;i++){
        if(nums[i]>mid) return false;
    if(add+nums[i]<=mid){
        add+=nums[i];
    }
    else{
        split++;
        add=nums[i];
    }

   }
   if(split>k)  return false;

   return true;

   }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int ans=0;
        if(k>n)   return 0;
        for(int i=0;i<n;i++){
           sum+=nums[i];
        }
        int s=0;
        int e=sum;
        while(s<=e){

            int mid=s+(e-s)/2;

            if (ispossible(nums,k,n,mid)){
                ans=mid;
                            e=mid-1;

            }
            else{
                 s=mid+1;
               
            }
        }
   return ans;

    }
};