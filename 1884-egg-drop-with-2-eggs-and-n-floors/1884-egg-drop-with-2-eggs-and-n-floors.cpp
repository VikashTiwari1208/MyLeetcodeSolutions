class Solution {
public:
    int twoEggDrop(int n) {
        vector<int> dp(n+1,0);
        //dp[i] is min number of moves to determine f for a nn floor
        
        for(int i=1;i<=n;i++)
        {
          int temp=INT_MAX;
            for(int j=1;j<=i;j++)
            {
                temp=min(temp,1+max(j-1,dp[i-j]));
            }
            dp[i]=temp;
        }
        return dp[n];
    }
};