class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        int length = 0;
        bool oddPresent = false;

        for (auto &p : freq) {
            if (p.second % 2 == 0) {
                length += p.second;     // use entire even count
            } else {
                length += p.second - 1; // use largest even part
                oddPresent = true;      // remember we have an odd
            }
        }

        // If any odd count exists, place one odd char in center
        if (oddPresent) length += 1;

        return length;
    }
};
