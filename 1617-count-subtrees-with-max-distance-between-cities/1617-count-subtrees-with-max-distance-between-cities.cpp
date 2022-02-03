class Solution {
public:
    void dfs(int start,vector<int>&vis,int &maxi,int &rn,unordered_map<int,vector<int>>&adj,set<int>&subtree,int cnt)
    {
       // cout<<start<<" ";
        vis[start-1]=1;
        cnt++;
       // cout<<cnt<<" ";
        for(auto x:adj[start])
        {
            if(vis[x-1]==-1&&subtree.find(x)!=subtree.end())
            {
                if(maxi<=cnt)
                {
                    maxi=cnt;
                    rn=x;
                }
                 dfs(x,vis,maxi,rn,adj,subtree,cnt);
            }
        }
    }
    vector<int> countSubgraphsForEachDiameter(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>adj;
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int>ans(n-1,0);
        for(int mask=0;mask<(1<<n);mask++)
        {
            set<int>subtree;
            for(int i=0;i<n;i++)
            {
                if(mask&(1<<i))
                {
                    subtree.insert(i+1);
                }
            }
            int edgecnt=0;
            //subtree validity chaxi,eck;
            for(auto x:edges)
            {
                if(subtree.find(x[0])!=subtree.end()&&subtree.find(x[1])!=subtree.end())
                {
                    edgecnt++;
                }
            }
            if(edgecnt>0&&edgecnt==subtree.size()-1)
            {
                // now get diamter of subtree;
              
               // cout<<endl;
                int maxi=INT_MIN;
                int start=*subtree.begin();
                int rn,cnt=0;
                vector<int>vis(n,-1);
                dfs(start,vis,maxi,rn,adj,subtree,cnt);
                for(int i=0;i<n;i++)
                {
                    vis[i]=-1;
                }
                cnt=0;
               // cout<<rn<<" ";
                dfs(rn,vis,maxi,start,adj,subtree,cnt);
                //cout<<cnt<<endl;
                //cout<<maxi<<endl;
                ans[maxi-1]++;
            }
        }
        return ans;
    }
};