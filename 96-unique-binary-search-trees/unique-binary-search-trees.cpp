class Solution {
public:
   int f(int n){
    //base case
    if(n==0)  return 1;
    if(n==1)  return 1;
    if(n==2)  return 2;
      int sum=0;
    for(int k=1;k<=n;k++){
        //here k is potential root ... we will find no of ways too make bst for each root
        sum+=f(k-1)*f(n-k);      //lbt*rbt
    }
    return sum;
   }
    int numTrees(int n) {
        return f(n);
    }
};