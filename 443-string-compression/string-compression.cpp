class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int indx=0;
        int i=0;
       while(i<n){
         char ch=chars[i];
         int cnt=0;

         while(i<n && chars[i]==ch){
            cnt++;
            i++;
         }

         if(cnt==1)      chars[indx++]=ch;
         else
         {

            chars[indx++]=ch;
            string str=to_string(cnt);
            for(auto dig:str){
                   chars[indx++]=dig;
            }

         }

    

       }

       chars.resize(indx);
       return indx;
    }
};