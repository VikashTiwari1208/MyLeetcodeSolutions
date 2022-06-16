class Solution {
public:
    unordered_map<int,vector<int>>adj;
    vector<int>vis;
    void dfs(int src,int &cnt)
    {
        vis[src]=1;
        cnt++;
        for(auto x:adj[src])
        {
            if(vis[x]==-1)
            {
                dfs(x,cnt);
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int xa=bombs[i][0];
                int ya=bombs[i][1];
                int ra=bombs[i][2];
                int xb=bombs[j][0];
                int yb=bombs[j][1];
                int rb=bombs[j][2];
               long long int dis1=((long long int)abs(xa-xb)*abs(xa-xb))+((long long int)abs(ya-yb)*abs(ya-yb));
                long long int dis2=(long long int)(ra)*(ra);
                long long int dis3=(long long int)rb*rb;
                 if(dis1<=dis2)
                {
                    adj[i].push_back(j);
                }
                if(dis1<=dis3)
                {
                    adj[j].push_back(i);
                }
            }
        }
        int ans=1;
        
        for(int i=0;i<n;i++)
        {
            int res=0;
         vis.resize(n,-1);   
                dfs(i,res);
            ans=max(ans,res);
            vis.clear();
        }
        return ans;
    }
};