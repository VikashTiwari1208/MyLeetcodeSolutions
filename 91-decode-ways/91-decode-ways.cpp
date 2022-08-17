class Solution {
public:
    int dp[102];
    int helper(int idx,string &s)
    {
        int n=s.length();
        if(idx>=n)
        {
            return 1;
        }
        if(dp[idx]!=-1)
        {
            return dp[idx];
        }
        if(s[idx]=='0')
        {
            return 0;
        }
        int way1=helper(idx+1,s);
        int way2=0;
        string temp="";
        temp+=s[idx];
        if(idx+1<=n-1)
        {
            temp+=s[idx+1];
        }
        int p=stoi(temp);
        if(p>=10&&p<=26)
        {
          //  cout<<temp<<endl;
            way2+=helper(idx+2,s);
        }
       // cout<<idx<<" "<<way1<<" "<<way2<<endl;
        return dp[idx]=way1+way2;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return helper(0,s);
    }
};