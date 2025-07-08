class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totalgas=0;
        int totalcost=0;

        for(int i=0;i<n;i++){
            totalgas+=gas[i];
        }
          for(int i=0;i<cost.size();i++){
            totalcost+=cost[i];
        }
         if(totalgas<totalcost) return -1;
          int start=0;
          int currgas=0;
        for(int i=0;i<n;i++){
          currgas+=gas[i]-cost[i];
          if(currgas < 0)        { //-ve{
            start=i+1;
            currgas=0;
          }
        }

           return start;

            }
};