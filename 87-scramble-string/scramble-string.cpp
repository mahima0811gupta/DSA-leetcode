class Solution {
public:
     //// string ho chnge ho to dp ka use alg way se krne krte h using mp
     unordered_map<string,bool>mp;
    bool f(string s1, string s2){
        bool result=false;

        //base case
        if(s1==s2)   return true;
        if(s1.length()!=s2.length())   return false;
         int n=s1.length();

         string key =s1+"_"+s2;
         if(mp.find(key)!=mp.end()){
            //prset h map me
            return mp[key];
         }
        for(int i=1;i<n;i++){
          /*
         s1= great             s2=eatrg
         s1.substr(0,i) gr   s2.substr(n-i,i) rg
         s1.substr(i,n-i) eat    s2.substr(0,n-i)   
          */
 bool swapped=f(s1.substr(0,i),s2.substr(n-i,i)) &&  f(s1.substr(i,n-i), s2.substr(0,n-i));
 if(swapped==true){
    result=true;
    break;
 }

 bool not_swapped=f(s1.substr(0,i),s2.substr(0,i)) &&  f(s1.substr(i,n-i), s2.substr(i,n-i));
 if(not_swapped==true){
    result=true;
    break;
 }
        }

        return mp[key]=result;
    }
    bool isScramble(string s1, string s2) {
        return f(s1,s2);
    }
};