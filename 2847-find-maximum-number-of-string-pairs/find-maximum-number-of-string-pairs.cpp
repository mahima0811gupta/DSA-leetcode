class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        int cnt=0;
        unordered_set<string>st;
        for(int i=0;i<n;i++){
            st.insert(words[i]);
        }
        for(int i=0;i<n;i++){
            string rev=words[i];
            reverse(rev.begin(),rev.end());
             if(rev==words[i])  continue;
            if(st.find(rev)!=st.end()){   //mil gya set me to cnt++ kro aur erase kr do use set se
                cnt++;
                st.erase(words[i]);
            }
        }

        return cnt;
    }
};