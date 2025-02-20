class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string>str{"0","1"};

        for(int i=2;i<=n;i++){
            vector<string>v;

            for(auto ch:str){
                v.push_back(ch+"1");
                if(ch.back()=='1')
                 v.push_back(ch+"0");
            }
            str=v;



        }
        return str;
    }
};