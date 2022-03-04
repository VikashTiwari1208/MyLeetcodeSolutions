class Solution {
public:
    double champagneTower(int p, int r, int c) {
       
        vector<vector<double>>dp(r+1,vector<double>(r+1,0));
        dp[0][0]=p;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                double left=(dp[i][j]-1.0)/2.0;
                if(left>=0)
                {
                    dp[i+1][j]+=left;
                    dp[i+1][j+1]+=left;
                }
            }
        }
        
        
        return min(1.0,dp[r][c]);
        
        
        
    }
};