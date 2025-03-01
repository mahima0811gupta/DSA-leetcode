class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.length();
        int m=s.length();
           vector<int>ans;
        vector<int>cntp(26,0);
        vector<int>cnts(26,0);

        for(auto &ch:p){
            cntp[ch-'a']++;
        }

        int i=0;
        int j=0;
        while(j<m){
            cnts[s[j]-'a']++;

            if(j-i+1>n){
                cnts[s[i]-'a']--;
                i++;
            }

            if(cnts==cntp){
                ans.push_back(i);
            }
        j++;
        }

        return ans;


    }
};