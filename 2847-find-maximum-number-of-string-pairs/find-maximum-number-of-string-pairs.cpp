class Solution {
public:


// tc=n2
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        int cnt=0;

        for(int i=0;i<n-1;i++){
                  string rev=words[i];
                  reverse(rev.begin(),rev.end());

                  for(int j=i+1;j<n;j++){
                    if(rev==words[j])
                    cnt++;
                  }
        }
        return cnt;
    }
};