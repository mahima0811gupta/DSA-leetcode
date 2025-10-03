class Solution {
public:


    void solve(int start,int n,vector<int>&result){
        if(start>n) return;

        result.push_back(start);
        //append new
        for(int append=0;append<=9;append++){
            int newnum=start*10+append;
            if(newnum>n)  return;
            solve(newnum,n,result);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>result;
        for(int start=1;start<=9;start++){
        
       solve(start,n,result);
        }

        return result;
    }
};