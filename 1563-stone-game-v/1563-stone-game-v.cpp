class Solution {
public:
    int dp[505][505];
    int solve(int i,int j,vector<int>&stones)
    {
        if(i>=stones.size())
        {
            return 0;
        }
        if(i==j)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        for(int idx=i;idx<=j-1;idx++)
        {
            int left,right;
            if(i==0)
            {
                left=stones[idx];
            }
             else
             {
                 left=stones[idx]-stones[i-1];
             }
             right=stones[j]-stones[idx];
            if(left<right)
            {
                dp[i][j]=max(dp[i][j],left+solve(i,idx,stones));
            }
            else if(right<left)
            {
                dp[i][j]=max(dp[i][j],right+solve(idx+1,j,stones));
            }
            else
            {
                dp[i][j]=max({dp[i][j],left+solve(i,idx,stones),right+solve(idx+1,j,stones)});
            }
        }
        return dp[i][j];
    }
    int stoneGameV(vector<int>& stone) {
        int n=stone.size();
     //   vector<int>stones(n+1,0);
        for(int i=1;i<n;i++)
        {
            stone[i]+=stone[i-1];
        }
        memset(dp,-1,sizeof(dp));
        return solve(0,n-1,stone);
    }
};