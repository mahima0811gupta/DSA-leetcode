class Solution {
public:
    int minBitFlips(int start, int goal) {
         int XOR   = start ^ goal;
        int count = 0;

        
        while(XOR) {
            count += (XOR & 1); 
            XOR = (XOR >> 1);
        }
        return count;
    }
};

    
