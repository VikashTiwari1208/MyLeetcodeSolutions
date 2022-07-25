class Solution {
public:
    int dp[21][5005];
    int helper(int idx,vector<int>&rods,int sum1,int sum2)
    {
        int n=rods.size();
        if(idx>n)
        {
            return 0;
        }
        if(idx==n)
        {
            if(sum1==sum2)
            {
                return 0;
            }
            return -5000;
        }
        if(dp[idx][abs(sum1-sum2)]!=-1)
        {
            return dp[idx][abs(sum1-sum2)];
        }
        int ans=0;
        int op1=rods[idx]+helper(idx+1,rods,sum1+rods[idx],sum2);
        int op2=rods[idx]+helper(idx+1,rods,sum1,sum2+rods[idx]);
        int op3=helper(idx+1,rods,sum1,sum2);
        return dp[idx][abs(sum1-sum2)]=max({op1,op2,op3});
    }
    int tallestBillboard(vector<int>& rods) {
        memset(dp,-1,sizeof(dp));
        return helper(0,rods,0,0)/2;
    }
};