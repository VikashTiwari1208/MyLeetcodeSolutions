class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto x:s)
        {
            if(x=='('||x=='{'||x=='[')
            {
                st.push(x);
            }
            else
            {
                char c=st.top();
                if(st.empty()||(c=='('&&x!=')'||c=='{'&&x!='}'||c=='['&&x!=']'))
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};