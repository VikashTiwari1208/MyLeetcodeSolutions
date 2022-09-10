class Solution {
public:
    int mod=1e9+7;
    int dp[41][(1<<10)+1];
    vector<vector<int>>pref;
    int solve(int hat,int mask,int n)
    {
        int f=(1<<n)-1;
        if(mask==f)
        {
           // cout<<mask<<endl;
            return 1;
        }
        if(hat>40)
        {
            return 0;
        }
        if(dp[hat][mask]!=-1)
        {
            return dp[hat][mask];
        }
        int ans=solve(hat+1,mask,n)%mod;//skip this hat;
        for(auto x:pref[hat])
        {
            int idx=x;
            if((mask&(1<<idx))==0)
            {
                int nmask=mask|(1<<idx);
                ans=(ans%mod+solve(hat+1,nmask,n)%mod)%mod;
            }
        }
        return dp[hat][mask]=ans;
    }
    int numberWays(vector<vector<int>>& hats) {
        memset(dp,-1,sizeof(dp));
        int n=hats.size();
        pref.resize(41);
        for(int i=0;i<n;i++)
        {
            for(auto x:hats[i])
            {
                pref[x].push_back(i);
            }
        }
        return solve(1,0,n);
    }
};