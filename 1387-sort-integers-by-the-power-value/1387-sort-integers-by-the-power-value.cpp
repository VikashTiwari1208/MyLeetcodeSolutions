class Solution {
public:
    unordered_map<int,int>dp;
    int help(int i)
    {
        if(dp.find(i)!=dp.end())
        {
            return dp[i];
        }
        int cnt=1+((i%2==0)?(help(i/2)):(help((3*i)+1)));
        return dp[i]=cnt;
    }
    int getKth(int lo, int hi, int k) {
      // memset(dp,-1,sizeof(dp));
        dp[1]=0; 
        vector<pair<int,int>>ans;
        for(int i=lo;i<=hi;i++)
        {
            ans.push_back({help(i),i});
        }
        sort(ans.begin(),ans.end() );
        return ans[k-1].second;
    }
};