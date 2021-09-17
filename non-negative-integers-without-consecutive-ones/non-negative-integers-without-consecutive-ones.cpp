class Solution {
public:
    int findIntegers(int n) {
        vector<int>dp(32,0),dpzero(32),dpone(32);
        dpzero[1]=1;
        dpone[1]=1;
        dp[1]=2;
        dp[0]=1;
        for(int i=2;i<=31;i++)
        {
          dpzero[i]=dpzero[i-1]+dpone[i-1];
            dpone[i]=dpzero[i-1];
            dp[i]=dpone[i]+dpzero[i];
           // cout<<i<<" "<<dpzero[i]<<" "<<dpone[i]<<" "<<dp[i]<<endl;
        }
        int ans=0;
        int last=0;
        for(int i=30;i>=0;i--)
        {
            int bit=1&(n>>i);
            if(bit==1)
            {
                cout<<i<<" ";
                ans+=dp[i];
                if(last==1)
                {
                    return ans;
                }
            }
            last=bit;
        }
        return ans+1;
    }
};