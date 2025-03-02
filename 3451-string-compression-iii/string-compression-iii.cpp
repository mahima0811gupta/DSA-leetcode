class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        int i=0;
        string ans="";
        while(i<n){
          char ch=word[i];
          int cnt=0;

          while(i<n && word[i]==ch){
            cnt++;
            i++;
          }
        while(cnt>9){
            ans+='9';
            ans+=ch;
            cnt-=9;
        }
 //less than 9
    
           ans+=to_string(cnt);
           ans+=ch;
        


        }

       return ans;
    }
};