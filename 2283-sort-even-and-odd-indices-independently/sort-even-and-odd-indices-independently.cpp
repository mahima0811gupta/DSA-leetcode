class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
         vector<int>odd,even;
         int n=nums.size();
         for(int i=0;i<n;i++){
            if(i%2==0)          
            even.push_back(nums[i]);
            else
            odd.push_back(nums[i]);
        }

        sort(odd.rbegin(),odd.rend());
        sort(even.begin(),even.end());
        int oddindx=0;
        int evenindx=0;
         for(int i=0;i<n;i++){
         if(i%2==0 && evenindx<even.size())
                      nums[i]=even[evenindx++];

        else if( oddindx<odd.size())
              nums[i]=odd[oddindx++];

        }

        return nums; 
    }
};