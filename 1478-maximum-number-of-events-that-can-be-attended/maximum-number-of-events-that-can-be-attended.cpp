class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n=events.size();
        //start the counting day from the staring index of the event
        int day=events[0][0];
        int result=0;
        int i=0;

        //make  min priorty queue to store the event on the basis of end date....nd select those
        //that are early end 
        priority_queue<int,vector<int>,greater<int>>pq;
         sort(events.begin(),events.end());
        while(!pq.empty() || i<n){
               if(pq.empty()) {
                day = events[i][0];
            }
           while(i<n && events[i][0]==day){ 
               ///puch in the queue nd then pop that have least ending time for that day
               pq.push(events[i][1]);
               i++;
           }

           if(!pq.empty()){
            pq.pop();
            result++;
             day++;
           }
         

           ///here there are some vale store in queu that the waste as the currenmt day is graete then the ending day then we should not select thse events so we have to pop these 

           while(!pq.empty() && pq.top()<day){
            pq.pop();
           }
        }
return result;
    }
};