class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
      int n=ages.size();
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back({ages[i],scores[i]});
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        vector<int>dp(n,0);
        dp[0]=arr[0].second;
        ans=dp[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=arr[i].second;
            for(int j=0;j<i;j++)
            {
                if(arr[i].second>=arr[j].second)
                {
                    dp[i]=max(dp[i],arr[i].second+dp[j]);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};