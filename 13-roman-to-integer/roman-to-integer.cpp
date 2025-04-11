class Solution {
public:
    int romanToInt(string s) {
          string sym[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int val[]    = {1000,900,500,400,100, 90, 50, 40, 10,  9,  5,  4,  1};

        int i = 0; 
        int ans = 0;

        for (int j = 0; j < 13; j++) {
            while (s.substr(i, sym[j].size()) == sym[j]) {
                ans += val[j];
                i += sym[j].size();
            }
        }

        return ans;
        
    }
};