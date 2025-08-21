class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        int cnt=0;
        set<string>st;
        for(int i=0;i<n;i++){
            string rev=words[i];

            reverse(rev.begin(),rev.end());
            if(!st.empty()  && st.find(rev)!=st.end()){
                  cnt++;
                  st.erase(rev);
            }
            else{
              st.insert(words[i]);
            }
        }

        return cnt;
    }
};