class Solution {
public:
    int n,m;
    bool isvalid(int x,int y)
    {
        if(x>=0&&x<n&&y>=0&&y<m)
        {
            return true;
        }
        return false;
    }
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    vector<vector<int>>dp;
    int dfs(int i,int j,vector<vector<int>>&mat,int par)
    {
        if(dp[i][j]>0)
        {
            return dp[i][j];
        }
        if(mat[i][j]>par)
        {
            dp[i][j]++;
        } int maxi=0;
        
        for(int k=0;k<4;k++)
        {
            int nx=i+dx[k];
            int ny=j+dy[k];
           
            if(isvalid(nx,ny)&&mat[i][j]<mat[nx][ny])
            {
                dfs(nx,ny,mat,mat[i][j]);
               maxi=max(maxi,dp[nx][ny]);
            }
        }
        return dp[i][j]+=maxi;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        dp.resize(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[i][j]==0)
                {
                    ans=max(ans,dfs(i,j,matrix,-1));
                }
            }
        }
       
        return ans;
    }
};