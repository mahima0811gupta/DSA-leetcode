class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        int cnt=0;
        unordered_set<string>st;

        /// using one loop,..... if check in set ki uska reverse present ya nhi if present h to use pop kr denge agr nhi h to dal denge
        for(int i=0;i<n;i++){
           string rev=words[i];
            reverse(rev.begin(),rev.end());
            if(!st.empty() && st.find(rev)!=st.end()){   //mil gya set me to cnt++ kro aur erase kr do use set se
                cnt++;
                st.erase(rev);
            }
            else  //nahi h 
            {
                st.insert(words[i]);
            }
        }
       
        return cnt;
    }
};