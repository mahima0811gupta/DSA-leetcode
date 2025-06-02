class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        int result=0;
        for(auto word:words){
            string reverseword=word;
            swap(reverseword[0],reverseword[1]);

            if(mp[reverseword]>0){
                //present h
                result+=4;
                mp[reverseword]--;
            }
            else{
                mp[word]++;
            }

        }

        // now check kya koi equal elemnet ;=like  aa  / bb prsent h kya if yes then include one in middle

        for(auto it:mp){
            string ele=it.first;
            int cnt=it.second;

            if(ele[0]==ele[1] && cnt>0){
                result+=2;
                break;
            }
        }

        return result;
    }
};