class Solution {
public:
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    queue<pair<pair<int,int>,int>>q;
    vector<vector<int>>vis;
    bool issafe(int x,int y,vector<vector<int>>&grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(x>=0&&x<n&&y>=0&&y<m)
        {
            return true;
        }
        return false;
    }
    void dfs(int x,int y,vector<vector<int>>&grid)
    {
        q.push({{x,y},0});
        grid[x][y]=2;
        vis[x][y]=1;
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(issafe(nx,ny,grid)&&grid[nx][ny]==1&&vis[nx][ny]==-1)
            {
                dfs(nx,ny,grid);
            }
        }
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        bool flag=false;
        vis.resize(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i,j,grid);
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        //int dis=0;
        while(q.empty()==false)
        {
          auto x=q.front().first;
            int dis=q.front().second;
            q.pop();
          
           
            for(int i=0;i<4;i++)
            {
                int nx=x.first+dx[i];
                int ny=x.second+dy[i];
                if(issafe(nx,ny,grid)&&vis[nx][ny]==-1)
                {
                     if(grid[nx][ny]==1)
                 {
                    return dis;
                 }
                    vis[nx][ny]=1;
                    q.push({{nx,ny},dis+1});
                }
            }
        }
        return 9;
    }
};