class Solution {
public:
     int dp[1005][405];
    int helper(int i,int left,vector<int>&p)
    {
        int n=p.size();
        if(i==n)
        {
            return 0;
        }
        if(left==0)
        {
            return 0;
        }
        if(dp[i][left]!=-1)
        {
            return dp[i][left];
        }
        bool buy=false;
        if(left%2==0)
        {
            buy=true;
        }
        int op1=helper(i+1,left,p);
        int op2;
        if(buy)
        {
            op2=-p[i]+helper(i+1,left-1,p);
        }
        else
        {
            op2=p[i]+helper(i+1,left-1,p);
        }
        return dp[i][left]=max(op1,op2);
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(2*k>prices.size())
        {
            int ans=0;
            for(int i=0;i<n-1;i++)
            {
                ans+=max((int)0,prices[i+1]-prices[i]);
            }
            return ans;
        }
        memset(dp,-1,sizeof(dp));
       // int n=prices.size();
        return helper(0,2*k,prices);
    }
};