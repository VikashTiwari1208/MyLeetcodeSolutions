class Solution {
public:
    bool dfs(int src,vector<vector<int>>&adj,vector<int>&vis)
    {
        vis[src]=1;
        for(auto x:adj[src])
        {
            if(vis[x]==1)
            {
                return false;
            }
            if(vis[x]==0&&dfs(x,adj,vis)==false)
            {
                return false;
            }
        }
        vis[src]=2;
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int n=graph.size();
        vector<int>vis(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
          if(vis[i]==0)
          {
              dfs(i,graph,vis);
          }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==2)
            {
                ans.push_back(i);
            }
        }
            return ans;
    }
};