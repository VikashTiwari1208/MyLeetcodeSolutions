class Solution {
public:
    
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
       int n=students.size();
        int m=students[0].size();
        int dp[n+1][(1<<n)];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            for(int mask=1;mask<(1<<n);mask++)
            {
                for(int j=0;j<n;j++)
                {
                    if((mask&(1<<j)))
                    {
                        int score=0;
                        for(int k=0;k<m;k++)
                        {
                          if(students[i-1][k]==mentors[j][k])
                          {
                              score++;
                          }
                        }
                        dp[i][mask]=max(dp[i][mask],score+dp[i-1][mask^(1<<j)]);
                       // cout<<i<<" "<<j<<" "<<mask<<" "<<dp[i][mask]<<endl;
                    }
                }
            }
        }
     
        return dp[n][(1<<n)-1];
    }
};