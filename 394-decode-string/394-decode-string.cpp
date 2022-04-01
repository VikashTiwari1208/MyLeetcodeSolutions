class Solution {
public:
    string decodeString(string s) {
        int n=s.length();
        stack<char>st;
        int i=0;
        while(i<n)
        {
           if(s[i]!=']')
           {
             st.push(s[i]);  
           }
            else
            {
              string temp="";
                while(st.empty()==false&&st.top()!='[')
                {  
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                string num="";
                while(st.empty()==false&&isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                }
                int frq=stoi(num);
                string temp2="";
                while(frq--)
                {
                    for(int j=0;j<temp.length();j++)
                    {
                        st.push(temp[j]);
                    }
                }
                
            }
            i++;
        }
        
        string ans="";
        while(st.empty()==false)
        {
            ans=st.top()+ans;
            st.pop();
        }
        //reverse(ans.begin(),ans.end());
        return ans;
        
    }
};