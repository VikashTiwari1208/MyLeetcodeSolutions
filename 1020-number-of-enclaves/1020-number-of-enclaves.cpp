class Solution {
public:
    int n,m;
    bool issafe(int x,int y)
    {
        if(x>=0&&x<n&&y>=0&&y<m)
        {
            return true;
        }
        return false;
    }
    int dx[4]={1,0,0,-1};
    int dy[4]={0,1,-1,0};
    void dfs(int x,int y,vector<vector<int>>&grid)
    {
        grid[x][y]=0;
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(issafe(nx,ny)&&grid[nx][ny]==1)
            {
               dfs(nx,ny,grid); 
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0||i==n-1||j==0||j==m-1)
                {
                    if(grid[i][j]==1)
                    {
                        dfs(i,j,grid);
                    }
                }
            }
        }
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};