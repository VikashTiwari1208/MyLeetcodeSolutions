class Solution {
public:
     unordered_map<int,vector<pair<int,int>>>adj;
    
    int dp[1002][1002];
    int helper(int src,int max_time,int curr_time,vector<int>&fee)
    {
        int n=fee.size();
        if(curr_time>max_time)
        {
            return 100000000;
        }
        if(src==n-1)
        {
            return dp[src][curr_time]=fee[src];
        }
        if(dp[src][curr_time]!=-1)
        {
            return dp[src][curr_time];
        }
        int res=100000000;
            for(auto x:adj[src])
            {
                int v=x.first;
                int t=x.second;
                if(curr_time+t<=max_time)
                {
                    res=min(res,fee[src]+helper(v,max_time,curr_time+t,fee));
                }
            }
        return dp[src][curr_time]=res;
    }
    int minCost(int maxt, vector<vector<int>>& edges, vector<int>& fee) {
        int n=fee.size();
       memset(dp,-1,sizeof(dp));
        //src vertex time
        for(auto x:edges)
        {
            int a=x[0];
            int b=x[1];
            int t=x[2];
            adj[a].push_back({b,t});
            adj[b].push_back({a,t});
        }
       
        int res=helper(0,maxt,0,fee);
        if(res==100000000)
        {
            return -1;
        }
        return res;
        
    }
};