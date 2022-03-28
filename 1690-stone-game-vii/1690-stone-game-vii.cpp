class Solution {
public:
    int dp[1004][1004];
    int solve(int i,int j,int sum,vector<int>&stones)
    {
        int n=stones.size();
        if(i>j)
        {
            return 0;
        }
        if(i<0||i>=n||j<0||j>=n)
        {
            return 0;
        }
        if(i==j)
        {
            return stones[i];
        }
        if(i==j-1)
        {
            return max(stones[i],stones[j]);
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int op1=sum-stones[i]-solve(i+1,j,sum-stones[i],stones);
        int op2=sum-stones[j]-solve(i,j-1,sum-stones[j],stones);
        dp[i][j]=max({dp[i][j],op1,op2});
        return dp[i][j];
    }
    int stoneGameVII(vector<int>& stones) {
        int sum=0;
        int n=stones.size();
        for(auto x:stones)
        {
            sum+=x;
        }
        memset(dp,-1,sizeof(dp));
        int res=solve(0,n-1,sum,stones);
       
        return res;
    }
};