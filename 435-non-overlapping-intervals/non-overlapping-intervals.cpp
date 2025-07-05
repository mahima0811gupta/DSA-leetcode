class Solution {
public:

    static bool cmp(vector<int>&a,vector<int>&b){

        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         int n= intervals.size();
        
        sort( intervals.begin(), intervals.end(),cmp);



        int ans=0;
        int last_end= intervals[0][1];

         for (int i = 1; i < n; i++) {
            if ( intervals[i][0] <last_end) {
                ans++;}
                else {
                last_end =  intervals[i][1];
            }
        }

        return ans;
    }
};