class Solution {
public:
    unordered_map<int,int>cnsize;
    vector<int>dx{1,-1,0,0};
    vector<int>dy{0,0,1,-1};
    bool isvalid(int x,int y,int n)
    {
        if(x>=0&&x<n&&y>=0&&y<n)
        {
            return true;
        }
        return false;
    }
    void dfs(vector<vector<int>>&grid,int n,int x,int y,int &cn,int marker)
    {
        cn++;
        grid[x][y]=marker;
        for(int i=0;i<4;i++)
        {
            int newx=x+dx[i];
            int newy=y+dy[i];
            if(isvalid(newx,newy,n)&&grid[newx][newy]==1)
            {
                dfs(grid,n,newx,newy,cn,marker);
            }
        }
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int mark=2;
        int area=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    int cn=0;
                    dfs(grid,n,i,j,cn,mark);
                    cnsize[mark]=cn;
                    mark++;
                    area=max(area,cn);
                }
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                }
            }
        }
    
        while(q.empty()==false)
        {
            auto x=q.front();
            q.pop();
            unordered_set<int>st;
            int temp=0;
            for(int i=0;i<4;i++)
            {
              int x1=x.first+dx[i];
              int y1=x.second+dy[i];
              if(isvalid(x1,y1,n)&&grid[x1][y1]!=0)
              {
                  if(st.find(grid[x1][y1])==st.end())
                  {
                      st.insert(grid[x1][y1]);
                      temp+=cnsize[grid[x1][y1]];
                  }
              }
            }
            area=max(area,temp+1);
        }
        return area;
    }
};