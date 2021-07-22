class Solution {
public:
    bool canReach(string s, int a, int b) {
        int n=s.length();
       vector<bool>dp(n,false);
        dp[0]=true;
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(i>=a&&dp[i-a])
            {
                sum++;
            }
            if(i-b-1>=0&&dp[i-b-1])
            {
                sum--;
            }
            if(s[i]=='0')
            {
                if(sum>0)
                {
                    dp[i]=true;
                }
                else
                {
                    dp[i]=false;
                }
            }
        }
        return dp[n-1];
    }
};