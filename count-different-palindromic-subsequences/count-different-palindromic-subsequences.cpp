class Solution {
public:
    int countPalindromicSubsequences(string s) {
       long long int M=(long long int)1e9+7;
         
        int n=s.length();
        vector<vector<long long int>>dp(n,vector<long long int>(n,0));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        for(int len=2;len<=n;len++)
        {
            for(int i=0;i<n-len+1;i++)
            {
                int j=i+len-1;
                if(s[i]==s[j])
                {
                    int l=i+1;
                    int h=j-1;
                    while(l<=h&&s[l]!=s[i])
                    {
                        l++;
                    }
                     while(h>=l&&s[h]!=s[i])
                    {
                        h--;
                    }
                    if(l>h)
                    {
                        dp[i][j]=dp[i+1][j-1]*2+2;
                    }
                    else if(l==h)
                    {
                        dp[i][j]=dp[i+1][j-1]*2+1;
                    }
                    else
                    {
                        dp[i][j]=dp[i+1][j-1]*2-(dp[l+1][h-1]);
                    }
                    dp[i][j]+=M;
                    dp[i][j]%=M;
                }
                else
                {
                dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
                      dp[i][j]+=M;
                    dp[i][j]%=M;
                }
            }
        }
        return dp[0][n-1];
    }
};