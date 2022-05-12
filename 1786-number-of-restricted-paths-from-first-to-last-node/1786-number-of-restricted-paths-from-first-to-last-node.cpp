class Solution {
public:
    const int mod = 1e9+7;
    unordered_map<int,vector<pair<int,int>>>adj;
    vector<int>dis;
    vector<int>vis;

    vector<int>dp;
    int dfs(int n,int src,int par)
    {
       // cout<<src<<" ";
        if(src==n)
        {
          // cout<<endl;
            return dp[src]=1;
        }
        if(dp[src]!=-1)
        {
            return dp[src];
        }
        vis[src]=1;
            int ans=0;
        for(auto x:adj[src])
        {
            if(x.first!=par)
            {
                if(dis[src]>dis[x.first])
                {
                    //cout<<x.first<<" ";
                    ans=(ans+dfs(n,x.first,src))%mod;
                }
            }
        }
        return dp[src]=ans%mod;
    }
    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        dis.resize(n+1,INT_MAX);
        vis.resize(n+1,-1);
        dp.resize(n+1,-1);
        int sz=edges.size();
        
        for(int i=0;i<sz;i++)
        {
            int a,b,c;
            a=edges[i][0];
            b=edges[i][1];
            c=edges[i][2];
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dis[n]=0;
        pq.push({0,n});
        while(pq.empty()==false)
        {
            auto x=pq.top();
            pq.pop();
            for(auto v:adj[x.second])
            {
                int src=v.first;
                int wt=v.second;
                if(dis[src]>dis[x.second]+wt)
                {
                    dis[src]=dis[x.second]+wt;
                    pq.push({dis[src],src});
                }
            }
        }
        
        return dfs(n,1,-1);
        
    }
};