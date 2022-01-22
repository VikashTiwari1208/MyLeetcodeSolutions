class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n+1][5];
        memset(dp,0,sizeof(dp));
        dp[1][0]=1;
        dp[1][1]=1;
        dp[1][2]=1;
        dp[1][3]=1;
        dp[1][4]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<5;j++)
            {
                for(int k=j;k<5;k++)
                {
                    dp[i][j]+=dp[i-1][k];
                }
            }
        }
        int ans=0;
        ans+=dp[n][0];
        ans+=dp[n][1];
        ans+=dp[n][2];
        ans+=dp[n][3];
        ans+=dp[n][4];
        return ans;
    }
};