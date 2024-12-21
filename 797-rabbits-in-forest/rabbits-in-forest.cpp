class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp; 
        // Map to store the count of each answer
        
        // Count the occurrences of each answer
        for (auto it : answers) {
            mp[it]++;
        }
        
        int ans=0;
        
        // Calculate the minimum number of rabbits needed
        for (auto it : mp) {
            if (it.first==0) {
                // If the answer is 0, each rabbit is alone
                ans+=it.second;
            }
            if (it.second<(it.first+1) && it.first!=0) {
                // If the number of rabbits giving the 
                //answer is less than the group size
                ans+=(it.first+1);
            }
            if ((it.first+1==it.second) && it.first!=0) {
                // If the number of rabbits giving 
                //the answer exactly matches the group size
                ans += it.second;
            }
            if (it.second>(it.first + 1) && it.first!=0) {
                // If the number of rabbits giving 
                //the answer exceeds the group size
                int groups=(it.second+it.first)/(it.first+1); 
                ans+=groups*(it.first+1);
            }
        }

        return ans;
    }
};