class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
    int n=strs.size();
    string result="";
    string first=strs[0];
    string last=strs[n-1];
    for(int i=0;i<first.size();i++){
           if(first[i]==last[i])
           result+=first[i];
           else
           break;
    }

    return result;
    }
};