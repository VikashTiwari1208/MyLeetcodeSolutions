class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int dp[n][n];
         int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            dp[n-1][i]=matrix[n-1][i];
            if(n-1==0)
            {
                ans=min(ans,dp[0][i]);
            }
        }
       
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j]=matrix[i][j];
                int cur=dp[i+1][j];
                if(j-1>=0)
                {
                    cur=min(cur,dp[i+1][j-1]);
                }
                if(j+1<n)
                {
                    cur=min(cur,dp[i+1][j+1]);
                }
                dp[i][j]+=cur;
                 if(i==0)
                {
                  ans=min(ans,dp[i][j]);
                }
            }
        }
        return ans;
    }
};