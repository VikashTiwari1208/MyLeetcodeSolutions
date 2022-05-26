class Solution {
public:
    unordered_map<int,vector<pair<int,int>>>adj;
    int dp[105][105];
    int helper(int src,int des,int k)
    {
        if(src==des)
        {
            return 0;
        }
        if(k<0)
        {
            return 100000000;
        }
        if(dp[src][k]!=-1)
        {
            return dp[src][k];
        }
        int res=100000000;
        for(auto x:adj[src])
        {
            res=min(res,x.second+helper(x.first,des,k-1));
        }
                    return dp[src][k]=res;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        for(auto x:flights)
        {
            int a=x[0];
            int b=x[1];
            int c=x[2];
            adj[a].push_back({b,c});
            //adj[b].push_back({a,c});
        }
        memset(dp,-1,sizeof(dp));
        int res=helper(src,dst,k);
        if(res==100000000)
        {
            return -1;
        }
        return res;
    }
};