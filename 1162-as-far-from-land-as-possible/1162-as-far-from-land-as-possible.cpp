class Solution {
public:
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    bool issafe(int x,int y,int n,int m)
    {
        if(x>=0&&x<n&&y>=0&&y<m)
        {
            return true;
        }
        return false;
    }

    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                   q.push({i,j});
                }
            }
        }
        if(q.size()==0||q.size()==n*m)
        {
            return -1;
        }
        int dis=0;
        while(q.empty()==false)
        {
            int sz=q.size();
            while(sz--)
            {
                auto x=q.front();
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int nx=x.first+dx[i];
                    int ny=x.second+dy[i];
                    if(issafe(nx,ny,n,m)&&grid[nx][ny]==0)
                    {
                        grid[nx][ny]=1;
                        q.push({nx,ny});
                    }
                    
                }
            }
            dis++;
        }
        return dis-1;
    }
};