class Solution {
public:
    int mod=1e9+7;
    int dp[50001][7][17];
    int m;
    int helper(int idx,int last,int len,vector<int>&maxi)
    {
        if(idx>=m)
        {
            return 1;
        }
        if(dp[idx][last][len]!=-1)
        {
            return dp[idx][last][len];
        }
        int ans=0;
        for(int i=1;i<=6;i++)
        {
            if(i==last&&len==maxi[i-1])
            {
                continue;
            }
            else if(i==last&&len<maxi[i-1])
            {
                ans=(ans%mod+helper(idx+1,i,len+1,maxi))%mod;
            }
            else
            {
                ans=(ans%mod+helper(idx+1,i,1,maxi))%mod;
            }
        }
        return dp[idx][last][len]=ans;
    }
    int dieSimulator(int n, vector<int>&maxi) {
        m=n;
        memset(dp,-1,sizeof(dp));
        return helper(0,0,0,maxi);
    }
};