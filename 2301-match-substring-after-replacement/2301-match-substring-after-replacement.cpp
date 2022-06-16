class Solution {
public:
    bool matchReplacement(string s, string sub, vector<vector<char>>& v) {
       set<pair<char,char>>st;
        for(auto x:v)
        {
            st.insert({x[1],x[0]});
        }
        
        int sz=sub.size();
       
        int n=s.length();
        for(int i=0;i<=n-sz;i++)
        {
            char temp;
            bool flag=true;
            for(int idx=0;idx<sz;idx++)
            {
                temp=s[idx+i];
                char temp2=sub[idx];
                if(temp!=temp2&&st.find({temp,temp2})==st.end())
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            {
                return true;
            }
        }
        return false;
    }
};