class Solution {
public:
    int dp[100002][7][7];
    int mod=1e9+7;
    int helper(int idx,int last1,int last2,int &n)
    {
        if(idx>=n)
        {
            return 1;
        }
        if(dp[idx][last1][last2]!=-1)
        {
            return dp[idx][last1][last2];
        }
        long long int ans=0;
        for(int i=1;i<=6;i++)
        {
            if(last1!=i&&last2!=i&&(last1==0||__gcd(i,last1)==1))
            {
                ans=(ans%mod+helper(idx+1,i,last1,n)%mod)%mod;
                ans=ans%mod;
            }
        }
        return dp[idx][last1][last2]=ans;
    }
    int distinctSequences(int n) {
        memset(dp,-1,sizeof(dp));
        return helper(0,0,0,n);
    }
};