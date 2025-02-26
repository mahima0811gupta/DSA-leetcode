class Solution {
public:
   bool vowel(char ch){
     return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
   }
    string reverseVowels(string s) {
        int left=0;
        int right=s.length()-1;

        while(left<right){
       
       while(left<right &&!vowel(s[left]))      left++;
       while(left<right &&!vowel(s[right]))      right--;
       
       //if(left<right)
       
      swap(s[left++],s[right--]);






        }
        return s;
    }
};