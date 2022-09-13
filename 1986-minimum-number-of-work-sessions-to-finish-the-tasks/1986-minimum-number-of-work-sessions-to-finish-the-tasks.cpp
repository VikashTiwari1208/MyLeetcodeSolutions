class Solution {
public:
    vector<vector<int>>dp;
    int fmask;
    int helper(int mask,int time,int &t,vector<int>&task)
    {
        if(mask==fmask)
        {
            return 0;
        }
        if(dp[mask][time]!=-1)
        {
            return dp[mask][time];
        }
        int n=task.size();
        int ans=1e8;
        for(int i=0;i<n;i++)
        {
            if((mask&(1<<i))==0)
            {
                int nmask=mask|(1<<i);
                if(time+task[i]<=t)
                {
                    ans=min(ans,helper(nmask,time+task[i],t,task));
                }
                else
                {
                    ans=min(ans,helper(nmask,task[i],t,task)+1);
                }
            }
        }
        return dp[mask][time]=ans;
    }
    int minSessions(vector<int>& tasks, int t) {
        int n=tasks.size();
        fmask=(1<<n)-1;
       dp.resize((1<<n)+2,vector<int>(16,-1));
        return helper(0,0,t,tasks)+1;
    }
};