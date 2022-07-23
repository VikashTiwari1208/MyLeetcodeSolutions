class Solution {
public:
  int dp[20][(1<<19)-1];
    int helper(vector<int>&a,vector<int>&b,int idx,int mask)
    {
        int n=a.size();
        if(idx==n)
        {
            return 0;
        }
        if(dp[idx][mask]>-1)
        {
            return dp[idx][mask];
        }
        int ans=0;
        int sz=b.size();
        for(int i=0;i<sz;i++)
        {
            if((mask&(1<<i))==0)
            {
               int n_mask=mask|(1<<i);
                int temp=a[idx]&b[i];
                ans=max(ans,temp+helper(a,b,idx+1,n_mask));
            }
        }
        return dp[idx][mask]=ans;
    }
    int maximumANDSum(vector<int>& v, int k) {
        int n=v.size();
        for(int i=1;i<=(2*k)-n;i++)
        {
            v.push_back(0);
        }
        int mask=0;
        memset(dp,-1,sizeof(dp));
        vector<int>slots(2*k,0);
        for(int i=0;i<k;i++)
        {
            slots[2*i]=i+1;
            slots[(2*i)+1]=i+1;
        }
    
          return helper(v,slots,0,mask);
    }
};