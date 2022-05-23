class Solution {
public:
    int dp[100005][5];
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
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return helper(0,4,prices);
    }
};