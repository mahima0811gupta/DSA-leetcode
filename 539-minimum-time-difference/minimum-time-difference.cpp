class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        vector<int>minute(n);
     for(int i=0;i<n;i++)  {
        string time=timePoints[i];
        string subhr=time.substr(0,2);
        string submin=time.substr(3); // 3 se end tak
         
         //convert in int
         int inthr=stoi(subhr);
         int intmin=stoi(submin);

         minute[i]=inthr*60+intmin; }
          
        sort(minute.begin(),minute.end());
         int result=INT_MAX;
         for(int i=1;i<n;i++){
            result=min(result,minute[i]-minute[i-1]);
             
         }
           result= min(result,(24*60-minute[n-1])+minute[0]);
          return result;
      



















       
    }
};