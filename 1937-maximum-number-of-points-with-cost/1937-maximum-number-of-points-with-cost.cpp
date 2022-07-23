class Solution {
public:
   
    long long maxPoints(vector<vector<int>>& point) {
        int n=point.size();
        int m=point[0].size();
        vector<long long int>dp(m,0);
        long long int ans=-1e16;
      
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               dp[j]+=point[i][j];
            }
            for (int j = 1; j <m; j++) {
                dp[j] = max(dp[j], dp[j - 1] - 1);
            }
            ans=dp[m-1];
             for (int j =m-2; j>=0; j--) {
                dp[j] = max(dp[j], dp[j + 1] - 1);
                if(i==n-1)
            {
                ans=max(dp[j],ans);
            }
             }
            
            
        }
        return ans;
    }
};