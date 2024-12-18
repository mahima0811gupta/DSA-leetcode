class Solution {
public:

static bool cmp(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        double result=0;
        for(int i=0;i<boxTypes.size();i++){
        if(boxTypes[i][0]<=truckSize){
            result+=boxTypes[i][0]*boxTypes[i][1];
            truckSize-=boxTypes[i][0];
        }
        else{
        result+=truckSize* boxTypes[i][1];
        break;
        }
        }
        return result;
    }
};