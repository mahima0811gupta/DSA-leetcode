class Solution {
public:
    vector<int> partitionLabels(string s) {
    //use arryaof 26 size to store the index of last occurance of the rach character
     vector<int>arr(26,-1);
     vector<int>ans;
    int n=s.length();
    //store the last index of each character
    for(int i=0;i<n;i++){
          int indx=s[i]-'a';
          arr[indx]=i;
    }
       
   int i=0;
   while(i<n){
    int end=arr[s[i]-'a'];
    int j=i;
    while(j<end){
    end=max(end,arr[s[j]-'a']);
   j++;

    }
    ans.push_back(j-i+1);
     i=j+1;

   }  
   return ans; 
    }
};