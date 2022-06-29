class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& v, vector<int>& time) {
        priority_queue<pair<int,int>>pq;
        vector<int>indeg(n+1);
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<v.size();i++)
        {
            int a=v[i][0];
            int b=v[i][1];
            adj[a].push_back(b);
            indeg[b]++;
        }
        vector<int>ans(n);
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(indeg[i+1]==0)
            {
                pq.push({time[i],i+1});
                ans[i]=time[i];
                res=max(res,ans[i]);
            }
        }
        while(pq.empty()==false)
        {
           auto y=pq.top();
            pq.pop();
            int src=y.second;
            int t=y.first;
           // cout<<src<<endl;
            for(auto x:adj[src])
            {
                ans[x-1]=max(ans[x-1],t+time[x-1]);
                res=max(res,ans[x-1]);
               // cout<<x<<" "<<ans[x-1]<<endl;
                indeg[x]--;
                if(indeg[x]==0)
                {
                    pq.push({ans[x-1],x});
                }
            }
        }
        return res;
    }
};