class Solution {
public:
    int total_state=0;
    int grpa=0;
    int grpb=0;
    vector<vector<int>>mask_cost;
    vector<vector<int>>dp;
    int helper(int idx,int mask)
    {
        if(idx>grpa)
        {
            return 1e6;
        }
        if(idx==grpa)
        {
            if(mask==total_state)
            {
                return 0;
            }
            else
            {
                return 1e6;
            }
        }
        if(dp[idx][mask]>-1)
        {
            return dp[idx][mask];
        } 
        int ans=1e6;
        for(int i=0;i<grpb;i++)
        {
           if(mask&(1<<i))
           {
            ans=min(ans,mask_cost[idx][1<<i]+helper(idx+1,mask));
           }
        }
        int cmask=total_state&(~mask);
        for(int i=cmask;i>0;i=(i-1)&cmask)
        {
             ans=min(ans,mask_cost[idx][i]+helper(idx+1,mask|i));
        }
        
        return dp[idx][mask]=ans;
    }
    int connectTwoGroups(vector<vector<int>>& cost) {
        int n=cost.size();
        int m=cost[0].size();
        total_state=(1<<m)-1;
        grpa=n;
        grpb=m;
        dp.resize(n,vector<int>(1<<m,-1));
        mask_cost.resize(n,vector<int>(1<<m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<(1<<m);j++)
            {
                int temp=0;
                for(int k=0;k<m;k++)
                {
                    if(j&(1<<k))
                    {
                        temp+=cost[i][k];
                    }
                }
                mask_cost[i][j]=temp;
            }
       
        }
        return helper(0,0);
    }
};