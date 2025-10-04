class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev; // previous row
        for (int i = 0; i <= rowIndex; i++) {
            vector<int> curr(i + 1, 1); 
            for (int j = 1; j < i; j++) {
                curr[j] = prev[j - 1] + prev[j]; // sum from previous row
            }
            prev = curr; // store current as previous for next iteration
        }
        return prev; // after last iteration, prev is the required row
    }
};
