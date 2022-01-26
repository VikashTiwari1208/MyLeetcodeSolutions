class Solution {
public:
  
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
     int n=arr.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            int maxi=-1;
            int ans=0;
            for(int len=1;len<=k;len++)
            {
               if(i-len+1>=0)
               {
                    maxi=max(maxi,arr[i-len+1]);
                int temp=maxi*len+dp[i-len+1];
                ans=max(ans,temp);
               }
            }
            dp[i+1]=ans;
        }
        return dp[n];
    }
};