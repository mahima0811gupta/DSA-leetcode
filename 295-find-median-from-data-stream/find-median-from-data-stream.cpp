class MedianFinder {
public:
   priority_queue<int>left_max_heap;
   priority_queue<int,vector<int>,greater<int>>right_min_heap;

    MedianFinder() {      }
    
    void addNum(int num) {
     if(left_max_heap.size()==0 || num<left_max_heap.top()) 
     left_max_heap.push(num);
     else right_min_heap.push(num);

     if(left_max_heap.size()>right_min_heap.size()+1){
     right_min_heap.push( left_max_heap.top());
    left_max_heap.pop();
     }
       if(right_min_heap.size()>left_max_heap.size()+1){
     left_max_heap.push(right_min_heap.top());
    right_min_heap.pop();
     }
        
    }
    
    double findMedian() {

        if(right_min_heap.size()==left_max_heap.size())

        return (left_max_heap.top()+right_min_heap.top())/2.0;

        else if(right_min_heap.size()>left_max_heap.size())
        return right_min_heap.top();
        else
       return left_max_heap.top();

    


    }
};
