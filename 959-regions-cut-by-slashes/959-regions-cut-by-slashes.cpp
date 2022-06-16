class Solution {
public:
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    bool isvalid(int x,int y,vector<vector<int>>&grid)
    {
        int nn=grid.size();
        if(x>=0&&x<nn&&y>=0&&y<nn&&grid[x][y]==0)
        {
            return true;
        }
        return false;
    }
    void dfs(int x,int y,vector<vector<int>>&grid)
    {
        grid[x][y]=1;
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(isvalid(nx,ny,grid))
            {
                dfs(nx,ny,grid);
            }
        }
    }
    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        vector<vector<int>>ngrid(n*3,vector<int>(n*3,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='/')
                {
                    ngrid[i*3][j*3+2]=1;
                    ngrid[i*3+1][j*3+1]=1;
                    ngrid[i*3+2][j*3]=1;
                }
                if(grid[i][j]=='\\')
                {
                    ngrid[i*3][j*3]=1;
                    ngrid[i*3+1][j*3+1]=1;
                    ngrid[i*3+2][j*3+2]=1;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<3*n;i++)
        {
            for(int j=0;j<3*n;j++)
            {
                if(ngrid[i][j]==0)
                {
                    dfs(i,j,ngrid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};