class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //here maximun two elemenet can occur n/3 times spo we take two candidate;
        int candidate1=INT_MIN,cnt1=0;
        int candidate2=INT_MIN,cnt2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
              if(candidate1==nums[i]) cnt1++;
             else if(candidate2==nums[i]) cnt2++;
             else if(cnt1==0){
                if(candidate2!=nums[i]) {
                    cnt1++;
                    candidate1=nums[i];
                }
             }
             else if(cnt2==0){
                if(candidate1!=nums[i]) {
                    cnt2++;
                    candidate2=nums[i];
                }
             }
        
         else{
            cnt1--;
            cnt2--;
         }
             
        }
 vector<int>ans;
      cnt1=0,cnt2=0;
         for(int i=0;i<n;i++){
            if(nums[i]==candidate1) cnt1++;
             if(nums[i]==candidate2) cnt2++;
         }
         if(cnt1>n/3) ans.push_back(candidate1);
           if(cnt2>n/3) ans.push_back(candidate2);

           return ans;

    }
};