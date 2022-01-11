class Solution {
public:
    
    int cherryPickup(vector<vector<int>>& grid) {
       int n=grid.size();
        int dp[n+1][n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                for(int k=0;k<=n;k++)
                {
                    dp[i][j][k]=INT_MIN;
                }
            }
        }
        dp[1][1][1]=grid[0][0];
        for(int r1=1;r1<=n;r1++)
        {
            for(int c1=1;c1<=n;c1++)
            {
                for(int r2=1;r2<=n;r2++)
                {
                    int c2=r1+c1-r2;
                    if(c2>n||c2<1||dp[r1][c1][r2]>0||grid[r1-1][c1-1]==-1||grid[r2-1][c2-1]==-1)
                    {
                        continue;
                    }
                int temp=max({dp[r1][c1-1][r2],dp[r1-1][c1][r2-1],dp[r1][c1-1][r2-1],dp[r1-1][c1][r2]});
                    if(temp<0)
                    {
                        continue;
                    }
                    int curr=0;
                    if(r1!=r2)
                    {
                        curr+=grid[r1-1][c1-1]+grid[r2-1][c2-1];
                    }
                    else
                    {
                        curr+=grid[r1-1][c1-1];
                    }
                    dp[r1][c1][r2]=curr+temp;
                }
            }
        }
        if(dp[n][n][n]<0)
        {
            return  0;
        }
        return dp[n][n][n];
    }
};