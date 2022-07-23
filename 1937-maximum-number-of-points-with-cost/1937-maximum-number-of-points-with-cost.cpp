class Solution {
public:
   
    long long maxPoints(vector<vector<int>>& point) {
        int n=point.size();
        int m=point[0].size();
        vector<vector<long long int>>dp(2,vector<long long int>(m,-1e16));
        long long int ans=-1e16;
        for(int i=0;i<m;i++)
        {
            dp[0][i]=point[0][i];
            ans=max(ans,dp[0][i]);
        }
        
        for(int i=1;i<n;i++)
        {
            vector<long long int>left(m+1,-1e16),right(m+1,-1e16);
            long long int maxil=-1e16,maxir=-1e16;
            for(int j=0;j<m;j++)
            {
                left[j+1]=max(dp[0][j]+j,left[j]);
               // maxil=max(maxil,left[j]);
            }
            for(int j=m-1;j>=0;j--)
            {
                right[j]=max(dp[0][j]-j,right[j+1]);
               // maxir=max(maxir,right[j]);
            }
            for(int j=0;j<m;j++)
            {
                dp[1][j]=max({dp[1][j],point[i][j]+left[j+1]-j,point[i][j]+right[j+1]+j});
                if(i==n-1)
                {
                    ans=max(ans,dp[1][j]);
                }
            }
            swap(dp[0],dp[1]);
            dp[1].clear();
        }
        return ans;
    }
};