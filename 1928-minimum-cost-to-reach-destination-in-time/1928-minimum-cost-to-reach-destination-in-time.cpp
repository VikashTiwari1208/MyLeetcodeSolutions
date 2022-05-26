class Solution {
public:
    int minCost(int maxt, vector<vector<int>>& edges, vector<int>& fee) {
        int n=fee.size();
        vector<vector<int>>v(n,vector<int>(n,INT_MAX));
        for(auto x:edges)
        {
            int a=x[0];
            int b=x[1];
            int t=x[2];
            v[a][b]=min(v[a][b],t);
           // v[b][a]=min(v[b][a],t);
        }
        unordered_map<int,vector<pair<int,int>>>adj;
        //src vertex time
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]!=INT_MAX)
                {
                    adj[i].push_back({j,v[i][j]});
                    adj[j].push_back({i,v[i][j]});
                }
            }
        }
        vector<int>cost(n,INT_MAX);
        vector<int>time(n,maxt+1);
        time[0]=0;
        cost[0]=fee[0];
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        pq.push({cost[0],time[0],0});
        // cost,time,v;
        while(pq.empty()==false)
        {
            vector<int> x=pq.top();
            pq.pop();
            int ptime=x[1];
            int src=x[2];
            int pcost=x[0];
           if(src==n-1)
           {
               return pcost;
           }
            for(auto x:adj[src])
            {
                int v=x.first;
                int t=x.second;
                // maxtime k under trip ho rhi h
                 int nt = ptime + t, nc = pcost +fee[v];
                   if(nt<time[v])
                   {
                        time[v]=min(time[v],nt);
                       
                        pq.push({nc,nt,v});
                    }
            }
        }
        return -1;
        
    }
};