class Solution {
public:

/// sliding window
    bool checkInclusion(string s1, string s2) {
         vector<int>cnts1(26,0);
         vector<int>cnts2(26,0);
          int n=s1.length();
          int m=s2.length();
         for(auto &ch:s1){
            cnts1[ch-'a']++;
         }
        
     int i=0;
     int j=0;

     while(j<m){
            cnts2[s2[j]-'a']++;
//// shrink the window
            if(j-i+1>n){
            cnts2[s2[i]-'a']--;
            i++;
            }

            if(cnts2==cnts1)       return true;
            j++;

     }




        return false;

    }
};