class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(int i=0;i<s.size();i++){
            if((s[i]=='(')|| (s[i]=='{')|| (s[i]=='['))
             st.push(s[i]);

             else{
                if(st.size()==0) 
                 return false; /// closing bracket more than opening
                            if((s[i]==')' && st.top()=='(')||
                             (s[i]=='}' && st.top()=='{')|| 
                             (s[i]==']'  && st.top()=='['))
                            {
                                st.pop();
                            }

                            else
                            return false;

             }
        }

      if(st.size()!=0)   return false;

      return true;
    }
};