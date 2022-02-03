class Solution {
public:
    vector<int>dp;
    bool helper(int score,int &target,int &maxi,int &mask)
    {
        if(dp[mask]!=-1)
        {
            return dp[mask];
        }
        for(int i=0;i<maxi;i++)
        {
            if((mask&(1<<i))==0)
            {
                int nscore=score+i+1;
                int nmask=mask|(1<<i);
                if(nscore>=target||helper(nscore,target,maxi,nmask)==false)
                {
                    return dp[mask]=1;
                }
            }
        }
        return dp[mask]=0;
    }
    bool canIWin(int maxi, int target) {
        int score=0;
        int mask=0;
        dp.resize(1<<maxi,-1);
        int sum=(maxi)*(maxi+1)/2;
        if(sum<target)
        {
            return false;
        }
        return helper(score,target,maxi,mask);
    }
};