class Solution {
public:
    bool validnumber(char ch) {
        return (ch >= '1' && ch <= '9');
    }

    int maxDepth(string s) {
        int depth = 0, maxDepth = 0;
        int maxi = INT_MIN;

        for (char ch : s) {
            if (ch == '(') {
                depth++;
                maxDepth = max(maxDepth, depth);
            } else if (ch == ')') {
                depth--;
            }

            // if (validnumber(ch)) {
            //     maxi = max(maxi, ch - '0'); 
            // }
        }
        return maxDepth;  
    }
};
