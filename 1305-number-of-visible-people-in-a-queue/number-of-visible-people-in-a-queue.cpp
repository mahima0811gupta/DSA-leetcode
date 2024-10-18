class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int>ans(n);
        stack<int>st;

        ans[n-1]=0;
        st.push(heights[n-1]);
        
        for(int i=n-2;i>=0;i--){
            int cnt=0;
        while(st.size()>0&&st.top()<heights[i]){
            st.pop();
            cnt++;
        }
        if(!st.empty())
        cnt++;
        st.push(heights[i]);
    
 ans[i]=cnt;


        }
        return ans;
    }
};