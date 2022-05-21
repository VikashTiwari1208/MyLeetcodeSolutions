class Solution {
public:
    int minInsertions(string s) {
        string temp=s;
        reverse(temp.begin(),temp.end());
        int n=s.length();
        int dp[n][n];
        if(temp[0]==s[0])
        {
            dp[0][0]=1;
        }
        else
        {
            dp[0][0]=0;
        }
        for(int i=1;i<n;i++)
        {
            if(s[0]==temp[i])
            {
                dp[0][i]=1;
            }
            else
            {
                dp[0][i]=dp[0][i-1];
            }
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]==temp[0])
            {
                dp[i][0]=1;
            }
            else
            {
                dp[i][0]=dp[i-1][0];
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(s[i]==temp[j])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
       // cout<<dp[n-1][n-1]<<" ";
        return n-dp[n-1][n-1];
    }
};