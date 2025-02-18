class Solution {
public:

    bool isvowel(char & ch){

        return  ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int i=0;
        int j=0;
        int maxv=0;
        int cnt=0;

        while(j<n){
             
            if(isvowel(s[j]))
            cnt++;

            if(j-i+1==k){
                maxv=max(maxv,cnt);
                if(isvowel(s[i]))
                cnt--; 
                i++;
            }

            j++;




        }

        return maxv;


    }
};