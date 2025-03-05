class Solution {
public:
    long long coloredCells(long n) {
        return 1+2*n*n-2*n;
    }
};