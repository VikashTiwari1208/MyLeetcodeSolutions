class Solution {
public:
  int dp[1001][1001];
  int n;
  int solve(int l,int r,vector<int>&stones,int sum)
  {
    if(l>=r)
    {
      return 0;
    }
    if(l==r+1)
    {
      return dp[l][r]=max(stones[l],stones[r]);
    }
    if(dp[l][r]!=-1)
    {
      return dp[l][r];
    }
     int first=sum-stones[l]-solve(l+1,r,stones,sum-stones[l]);
    int second=sum-stones[r]-solve(l,r-1,stones,sum-stones[r]);
  //  ans+=max(first,second);
 //   cout<<ans<<" "<<l<<" "<<r<<endl;
    return  dp[l][r]=max(first,second);
  }
    int stoneGameVII(vector<int>& stones) {
      n=stones.size();
      memset(dp,-1,sizeof(dp));
      int ans=0;
      int sum=accumulate(stones.begin(),stones.end(),(int)0);
      return solve(0,n-1,stones,sum);
      //return sum-ans;
    }
};