class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
       
        int ans=0;
        
        vector<vector<int>>dp(n,vector<int>(n,n+2));
        for(auto x:mines)
        {
            dp[x[0]][x[1]]=0;
        }
        //left
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(dp[i][j]>0)
                {
                    dp[i][j]=min(dp[i][j],cnt+1);
                    cnt++;
                }
                else
                {
                    cnt=0;
                    dp[i][j]=0;
                }
            }
        }
        // right
         for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=n-1;j>=0;j--)
            {
                if(dp[i][j]>0)
                {
                    dp[i][j]=min(dp[i][j],cnt+1);
                    cnt++;
                }
                else
                {
                    cnt=0;
                    dp[i][j]=0;
                }
            }
        }
         for(int j=0;j<n;j++)
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(dp[i][j]>0)
                {
                    dp[i][j]=min(dp[i][j],cnt+1);
                    cnt++;
                }
                else
                {
                    cnt=0;
                    dp[i][j]=0;
                }
            }
        }
         for(int j=0;j<n;j++)
        {
            int cnt=0;
            for(int i=n-1;i>=0;i--)
            {
                if(dp[i][j]>0)
                {
                    dp[i][j]=min(dp[i][j],cnt+1);
                    cnt++;
                }
                else
                {
                    cnt=0;
                    dp[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
        
        
    }
};