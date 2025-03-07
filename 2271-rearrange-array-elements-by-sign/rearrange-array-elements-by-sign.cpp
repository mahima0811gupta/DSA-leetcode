class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        

       int minus=1;
       int plus=0;
       for(int i=0;i<n;i++){
           if(arr[i]>0){
         ans[plus]=arr[i];
         plus+=2;
           }
       }
       for(int i=0;i<n;i++){
           if(arr[i]<0){
         ans[minus]=arr[i];
         minus+=2;
           }
       }
 return ans;

    }
};