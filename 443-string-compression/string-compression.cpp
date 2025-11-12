class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int indx=0;
        int i=0;
        while(i<n){
            int cnt=0;
            int ch=chars[i];
            while(i<n && ch==chars[i]){
                cnt++;
                i++;
            }

            if(cnt>1){
                chars[indx++]=ch;
                string sub=to_string(cnt);
                for(auto dig:sub){
                    chars[indx++]=dig;
                }
            }
            else{
                chars[indx++]=ch;
            }
        }

       // chars.resize(indx);
        return indx;
    }
};