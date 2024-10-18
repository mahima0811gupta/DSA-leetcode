class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
         vector<int>psi(n);
        vector<int>nsi(n);
        vector<int>ans(n);
        stack<int>st;

        //for next smallest index
        nsi[n-1]=n;
        st.push(n-1);

        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.size()==0)
            nsi[i]=n;
            else{
            nsi[i]=st.top();
            }
            st.push(i);

        }
        // Clear the stack for previous smallest index
        while (!st.empty()) {
            st.pop();
        }


     //for prev smallest index

     psi[0]=-1;
     st.push(0);
     for(int i=1;i<n;i++){
        while(st.size()>0&&heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.size()==0)
            psi[i]=-1;
            else{
            psi[i]=st.top();
            }
            st.push(i);


     }
     int maxi=INT_MIN;
     for(int i=0;i<n;i++){

        ans[i]=heights[i]*(nsi[i]-psi[i]-1);
        maxi = max(maxi, ans[i]);
     }
     return maxi;





    }
};