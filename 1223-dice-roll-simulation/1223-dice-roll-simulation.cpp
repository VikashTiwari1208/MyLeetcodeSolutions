class Solution {
public:
    int mod=1e9+7;

    int dieSimulator(int n, vector<int>&maxi) {
       vector<vector<vector<int>>> dp(n, vector<vector<int>>(6, vector<int>(16, 0)));
        for(int i=0;i<6;i++)
        {
          dp[0][i][1]=1;
        }
        // dp[i][j][k] total no of seq ending at j occuring k consecutive at ith turn
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<6;j++)
            {
                for(int k=0;k<6;k++) // j is occuring first
                {
                    if(k==j)
                    {
                        continue;
                    }
                    else
                    {
                      for(int c=0;c<=maxi[k];c++)
                      {
                          dp[i][j][1]=(dp[i][j][1]%mod+dp[i-1][k][c]%mod)%mod;
                      }
                    }
                }
                for(int c=2;c<=maxi[j];c++)
                {
                    dp[i][j][c]=(dp[i][j][c]%mod+dp[i-1][j][c-1]%mod)%mod;
                }
            }
        }
        int ans=0;
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<=maxi[i];j++)
            {
                ans=(ans%mod+dp[n-1][i][j]%mod)%mod;
            }
        }
        return ans;
    }
};