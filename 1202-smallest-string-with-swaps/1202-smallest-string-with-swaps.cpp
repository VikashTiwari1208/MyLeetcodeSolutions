class Solution {
public:
    unordered_map<int,vector<int>>adj;
    vector<int>vis;
    string ss;
    void dfs(int src,string &temp,vector<int>&v)
    {
        temp+=ss[src];
        vis[src]=1;
        v.push_back(src);
        for(auto x:adj[src])
        {
            if(vis[x]==-1)
            {
                dfs(x,temp,v);
            }
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.length();
        ss=s;
        for(auto x:pairs)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vis.resize(n,-1);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                string temp="";
                vector<int>index;
                dfs(i,temp,index);
                sort(temp.begin(),temp.end());
                sort(index.begin(),index.end());
                for(int i=0;i<temp.length();i++)
                {
                    s[index[i]]=temp[i];
                }
            }
        }
        return s;
    }
};