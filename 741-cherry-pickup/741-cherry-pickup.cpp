class Solution {
public:
    int dp[51][51][51];
    int n,m;
    int helper(int r1,int c1,int r2,vector<vector<int>>&grid)
    {
        int c2=r1+c1-r2;
        if(r1>=n||c1>=m||r2>=n||c2>=m||grid[r1][c1]==-1||grid[r2][c2]==-1)
        {
            return INT_MIN;
        }
        if(r1==n-1&&c1==m-1)
        {
            return grid[n-1][m-1];
        }
        if(dp[r1][c1][r2]!=0)
        {
            return dp[r1][c1][r2];
        }
        int chr=0;
        if(r1==r2&&c1==c2)
        {
            chr+=grid[r1][c1];
        }
        else
        {
            chr+=grid[r1][c1]+grid[r2][c2];
        }
        // hh vv vh hv
        int op1=helper(r1,c1+1,r2,grid);
        int op2=helper(r1+1,c1,r2+1,grid);
        int op3=helper(r1+1,c1,r2,grid);
        int op4=helper(r1,c1+1,r2+1,grid);
        chr+=max({op1,op2,op3,op4});
        return dp[r1][c1][r2]=chr;
    }
    int cherryPickup(vector<vector<int>>& grid) {
       memset(dp,0,sizeof(dp));
        n=grid.size();
        m=grid[0].size();
        int ans=helper(0,0,0,grid);
        if(ans<0)
        {
            return 0;
        }
        return ans;
    }
};