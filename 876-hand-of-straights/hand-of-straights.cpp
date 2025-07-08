class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;
             //use ordered map to store the value nd their frequency
             map<int,int>mp;
             for (auto it:hand){
                mp[it]++;
             }


             while(!mp.empty()){
                int curr=mp.begin()->first;
                for(int i=0;i<groupSize;i++){
                    if(mp[curr+i]==0)  {
                        mp.erase(curr+i);
                     return false;
                    }
                    mp[curr+i]--;
                if (mp[curr + i] == 0) {
                    mp.erase(curr + i);
                }
                }
                }


             return true;
    }
};
