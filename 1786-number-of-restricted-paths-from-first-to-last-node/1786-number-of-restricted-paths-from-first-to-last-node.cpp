class Solution {
public:
    const int m = 1e9+7;
int solve(int i,int p,int n,vector<int> &dis,vector<int> &vis,vector<vector<pair<int,int>>> &g,vector<int> &dp)
    {
        if(n==i){return dp[i]=1;}
        if(dp[i]!=-1){return dp[i];}
        vis[i]=1;
        int ans=0;
        for(auto child:g[i])
        {   
            if(vis[child.first]==1){continue;}
            if(dis[i]<=dis[child.first]){continue;}
            ans=(ans+solve(child.first,i,n,dis,vis,g,dp))%m;
           vis[child.first]=0;
        }
        return dp[i]=ans%m;
    }
    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> g(n+1);
        int m=edges.size();
        for(int i=0;i<m;i++)
        {
            int x=edges[i][0];
            int y=edges[i][1];
            int w=edges[i][2];
            g[x].push_back({y,w});
            g[y].push_back({x,w});
        }
        vector<int> dis(n+1,INT_MAX);
        dis[n]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,n});
        while(q.empty()==false)
        {
            auto x=q.top();
            q.pop();
            int pw=x.first;
            int p=x.second;
            for(auto it:g[p])
            {
                int c=it.first;
                int cw=it.second;
                if(dis[c]>dis[p]+cw)
                {
                    dis[c]=dis[p]+cw;
                    q.push({dis[c],c});
                }
            }
        }
        vector<int> vis(n+1,0);
        vector<int> dp(n+1,-1);
        return solve(1,0,n,dis,vis,g,dp);
    }
};