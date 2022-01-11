class Solution {
public:
    int dp[71][71][71];
    int n,m;
    //int dx[3]={1,1,1};
    int dy[3]={-1,0,1};
    int helper(int r,int c1,int c2,vector<vector<int>>&grid)
    {
        if(r==n)
       {
            return 0;
       }
        if(c1<0||c1>=m||c2>=m||c2<0)
        {
            return -1;
        }
        if(dp[r][c1][c2]!=-1)
        {
            return dp[r][c1][c2];
        }
        int maxi=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                maxi=max(maxi,helper(r+1,c1+dy[i],c2+dy[j],grid));
            }
        }
        int temp=0;
        if(c1==c2)
        {
            temp+=grid[r][c1];
        }
        else
        {
            temp+=grid[r][c1]+grid[r][c2];
        }
        return dp[r][c1][c2]=maxi+temp;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        int ans=-1;
        helper(0,0,m-1,grid);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,dp[0][i][j]);
            }
        }
        return ans;
    }
};