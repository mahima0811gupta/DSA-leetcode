class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen=1;
        int start=0;
        int n=s.length();
        if(n==0)  return "";
        for(int i=1;i<n;i++){
         //odd
        int l=i-1;
        int r=i+1;
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>maxlen){
                 start=l;
                maxlen=r-l+1;
            }
            l--;
            r++;
        }
         //even
         l=i-1;
         r=i;
         while(l>=0 && r<n && s[l]==s[r]){
       
              if(r-l+1>maxlen){
                start=l;
                maxlen=r-l+1;
            }
            l--;
            r++;
         }

        }
        return s.substr(start,maxlen);
    }
};