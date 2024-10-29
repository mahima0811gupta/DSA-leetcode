class Solution {
public:
   vector<string>result;
   


bool isvalid(string &str){
    int cnt=0;
    for(char ch:str){
        if(ch=='(')
        cnt++;
        else
        cnt--;
        if (cnt<0)
        return false;
    }
    
    return cnt==0;
}
   void solve(string &curr,int n){
// base case
if(curr.length()==2*n){
    if (isvalid(curr)){
    result.push_back(curr);
}
return;
}

//do
curr.push_back('(');
//exlpore
solve(curr,n);
//undo
curr.pop_back();


//do
curr.push_back(')');
//exlpore
solve(curr,n);
//undo
curr.pop_back();


   }



    vector<string> generateParenthesis(int n) {
        string curr="";
        solve(curr,n);
        return result;

    }
};