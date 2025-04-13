class Solution {
public:
   bool vowel(char ch){
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
               }

    string reverseVowels(string s) {
           int start=0;
           int end=s.length()-1;
           while(start<end){
           while(start<end && !vowel(s[start])) start++;

             while(start<end && !vowel(s[end])) end--;

            
                swap(s[start],s[end]);
                start++;
                end--;
             
           }
return s;
    }
};