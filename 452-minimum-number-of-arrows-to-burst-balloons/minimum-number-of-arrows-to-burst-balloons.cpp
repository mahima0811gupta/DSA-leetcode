class Solution {
public:

    static bool cmp(vector<int>&a,vector<int>&b){

        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        
        sort(points.begin(),points.end(),cmp);



        int ans=1;
        int last_end=points[0][1];

         for (int i = 1; i < n; i++) {
            if (points[i][0] > last_end) {
                ans++;
                last_end = points[i][1];
            }
        }

        return ans;

    }
};