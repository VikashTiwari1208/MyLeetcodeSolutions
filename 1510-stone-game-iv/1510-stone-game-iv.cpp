class Solution {
public:
    bool winnerSquareGame(int n) {
        int dp[n+1];
        // dp[i] tellls if i stones are there and alice is staring what will happern
        memset(dp,0,sizeof(dp));
      dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j*j<=i;j++)
            {
                if(dp[i-j*j]==0)
                {
                    dp[i]=1;
                    break;
                }
            }
        }
        return dp[n];
    }
};