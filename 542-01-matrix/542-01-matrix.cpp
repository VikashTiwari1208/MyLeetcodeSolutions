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
    int dy[4]={0,-1,1,0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      n=mat.size();
      m=mat[0].size();
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    dis[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(q.empty()==false)
        {
            auto x=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x.first+dx[i];
                int ny=x.second+dy[i];
                if(issafe(nx,ny)&&dis[nx][ny]>dis[x.first][x.second]+1)
                {
                    dis[nx][ny]=1+dis[x.first][x.second];
                    q.push({nx,ny});
                }
            }
        }
        return dis;
    }
};