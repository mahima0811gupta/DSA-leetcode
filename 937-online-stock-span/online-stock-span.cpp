class StockSpanner {
public:
    stack<pair<int,int>> st;
    int index=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(st.empty()){
            st.push({price,index++});
            return 1;
        }else{
            while(!st.empty() && price>=st.top().first){
                st.pop();
            }
            int res=0;
            res=st.empty()?index+1:index-st.top().second;
            st.push({price,index++});
            return res;
        }
    }
};