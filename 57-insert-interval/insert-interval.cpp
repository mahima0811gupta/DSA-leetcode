class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newinterval) {
        ///here first we find the left sode that are not overlapping and store as it is in the result vector then find the overalpping ibnterval merge then

        //left nonoverlapping interval
        int n=intervals.size();
         vector<vector<int>>result;
        int i=0;
        while(i<n && intervals[i][1]<newinterval[0]){
               result.push_back(intervals[i]);
               i++;
        }
    ///finding overlapping interval
    while (i < n && intervals[i][0] <= newinterval[1]) {
        newinterval[0]=min( newinterval[0],intervals[i][0]);
          newinterval[1]=max( newinterval[1],intervals[i][1]);
        
          i++;

    }
      result.push_back(newinterval);
while(i<n){
    result.push_back(intervals[i]);
    i++;
}
return result;
    }
};