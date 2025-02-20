class Solution {
public:

    string findDifferentBinaryString(vector<string>& nums) {
        string ans;
       for(char i=0;i<nums.size();i++) {

        char ch=nums[i][i];

        if(ch=='0')
            ans+="1";

        else
               ans+="0";
       }

       return ans;
    }
};