class Solution {
public:
   vector<string>result;

   void solve(string &curr,int n,int open,int close){
// base case
if(curr.length()==2*n){
    result.push_back(curr);

return;
}

if(open<n)
{
//do
curr.push_back('(');

//exlpore
solve(curr,n,open+1,close);
//undo
curr.pop_back();
}

if(close<open){
//do
curr.push_back(')');

//exlpore
solve(curr,n,open,close+1);
//undo
curr.pop_back();
}

   }



    vector<string> generateParenthesis(int n) {
        string curr="";
        int open=0;
        int close=0;
        solve(curr,n,open,close);
        return result;

    }
};