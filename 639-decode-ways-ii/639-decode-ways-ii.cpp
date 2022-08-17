class Solution {
public:
    int dp[100005];
    int mod=1e9+7;
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
       long long int ans=helper(idx+1,s);
        if(s[idx]=='*')
        {
            ans=ans*9;
            if(idx+1<n&&s[idx+1]>='0'&&s[idx+1]<='9')
            {
                ans=ans+helper(idx+2,s);
            }
            if(idx+1<n&&s[idx+1]=='*')
            {
                ans+=(long long int)9*helper(idx+2,s);
            }
            if(idx+1<n&&s[idx+1]>='0'&&s[idx+1]<='6')
            {
                ans=ans+helper(idx+2,s);
            }
            if(idx+1<n&&s[idx+1]=='*')
            {
                ans+=(long long int)6*helper(idx+2,s);
            }
        }
        else if(s[idx]=='1')
        {
            if(idx+1<n&&s[idx+1]>='0'&&s[idx+1]<='9')
            {
                ans=ans+helper(idx+2,s);
            }
            if(idx+1<n&&s[idx+1]=='*')
            {
                ans+=(long long int)9*helper(idx+2,s);
            }
        }
        else if(s[idx]=='2')
        {
            if(idx+1<n&&s[idx+1]>='0'&&s[idx+1]<='6')
            {
                ans=ans+helper(idx+2,s);
            }
            if(idx+1<n&&s[idx+1]=='*')
            {
                ans+=(long long int)6*helper(idx+2,s);
            }
        }
        ans=ans%mod;
        return dp[idx]=ans;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return helper(0,s);
    }
};