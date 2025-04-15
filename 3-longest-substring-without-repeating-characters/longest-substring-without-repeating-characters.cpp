class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();

if(s=="")   return 0;
        int maxlen=1; vector<int>hash(256,0);
        for(int i=0;i<n;i++){
                        vector<int> hash(256, 0);  //RESET THE HASH FOR EACH I
            for(int j=i;j<n;j++){
                  if(hash[s[j]]==1)  break;
                  maxlen=max(maxlen,j-i+1);
                  hash[s[j]]=1;
            }
        
        }

        return maxlen;
    }
};