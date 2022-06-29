class Solution {
public:
    int ans=0;
    vector<int>vis;
    unordered_map<int,vector<int>>adj;
   
    int dfs(int src,int par)
    {
        vis[src]=1;
        int d=0;
        for(auto x:adj[src])
        {
            if(vis[x]==-1&&x!=par)
            {
                d=max(d,1+dfs(x,src));
            }
        }
        return d;
    }


    int maximumInvitations(vector<int>& fav) {
        int n=fav.size();
        vis.resize(n,-1);
        
        for(int i=0;i<n;i++)
        {
            adj[fav[i]].push_back(i);
        }
        // case 1
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                if(i==fav[fav[i]])// 2length cycle exist
                {
                    int a=0,b=0;
                    a=dfs(i,fav[i]);
                    b=dfs(fav[i],i);
                    //cout<<i<<" "<<a<<" "<<b<<endl;
                    ans+=2+a+b;
                }
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++)
        {
            vis[i]=-1;
        }
         int cycle=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                int node=i;
                 vector<int> temp;
                while(vis[node]==-1)
                {
                    vis[node]=1;
                    temp.push_back(node);
                    node=fav[node];
                }
                for(int i=0;i<temp.size();i++)
                {
                    if(temp[i]==node)
                    {
                        cycle=max(cycle,(int)temp.size()-i);
                    }
                }
            }
        }
        //cout<<cycle<<" ";
        ans=max(ans,cycle);
        return ans;
    }
};