class Solution {
public:

    bool allzeros(vector<int>&cnt){
         for(auto i:cnt){
             if(i!=0)
             return false;
         }
        return true;
     }
    vector<int> findAnagrams(string s, string p) {

         int n=p.size();
	    int m=s.size();
	    vector<int>cnt(26,0);
for(int i=0;i<n;i++){
    int ch=p[i];
    
    cnt[ch-'a']++;
    
}	  

int i=0,j=0;
vector<int>ans;
while(j<m){
    cnt[s[j]-'a']--;
    
    if(j-i+1==n){
        if(allzeros(cnt))
        {
        ans.push_back(i);
        }
        cnt[s[i]-'a']++;
        i++;
    }
    j++;
}
return ans;        
    }
};