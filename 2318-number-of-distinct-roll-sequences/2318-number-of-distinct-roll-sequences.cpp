class Solution {
public:
    int mod=1e9+7;
    /*int dp[100002][7][7];
    
    int helper(int idx,int last1,int last2,int &n)
    {
        if(idx>=n)
        {
            return 1;
        }
        if(dp[idx][last1][last2]!=-1)
        {
            return dp[idx][last1][last2];
        }
        long long int ans=0;
        for(int i=1;i<=6;i++)
        {
            if(last1!=i&&last2!=i&&(last1==0||__gcd(i,last1)==1))
            {
                ans=(ans%mod+helper(idx+1,i,last1,n)%mod)%mod;
                ans=ans%mod;
            }
        }
        return dp[idx][last1][last2]=ans;
    }*/
    int distinctSequences(int n) {
        int dp[n+1][7][7];
        for(int i=0;i<7;i++)
        {
            for(int j=0;j<7;j++)
            {
                dp[n][i][j]=1;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
               for(int prev1=0;prev1<7;prev1++)
              {
                for(int prev2=0;prev2<7;prev2++)
                {
                    int ans=0;
                    for(int curr=1;curr<=6;curr++)
                  {
                   if(prev1!=curr&&prev2!=curr&&(__gcd(prev1,curr)==1||prev1==0))
                   {
                      ans=(ans%mod+dp[i+1][curr][prev1]%mod)%mod;
                   }
                }
              dp[i][prev1][prev2]=ans;      
             }   
            }
        }
        return dp[0][0][0];
    }
};