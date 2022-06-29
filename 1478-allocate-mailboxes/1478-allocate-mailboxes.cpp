class Solution {
public:
    int dp[10004][104];
    int helper(int idx,int k,vector<int>&house)
    {
        int n=house.size();
        if(idx>=n)
        {
            return 0;
        }
        if(k<=0)
        {
         return dp[idx][k]= 1e9;
        }
        if(dp[idx][k]!=-1)
        {
            return dp[idx][k];
        }
        int ans=1e9;
        // try all possibilties;
        for(int i=idx;i<n;i++)
        {
             int res=0;
             int med=house[(i+idx)/2];
            for(int j=idx;j<=i;j++)
            {
                
                 res+=abs(med-house[j]);
                ans=min(ans,res+helper(j+1,k-1,house));
            }
        }
        return dp[idx][k]=ans;
       
    }
    int minDistance(vector<int>& houses, int k) {
        memset(dp,-1,sizeof(dp));
        sort(houses.begin(),houses.end());
        return helper(0,k,houses);
    }
};