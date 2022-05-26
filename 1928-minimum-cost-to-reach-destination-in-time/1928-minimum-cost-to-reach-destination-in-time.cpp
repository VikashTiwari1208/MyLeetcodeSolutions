class Solution {
public:
    int minCost(int maxt, vector<vector<int>>& edges, vector<int>& fee) {
        int n=fee.size();
        unordered_map<int,vector<pair<int,int>>>adj;
        //src vertex time
        for(auto x:edges)
        {
            int a=x[0];
            int b=x[1];
            int t=x[2];
            adj[a].push_back({b,t});
            adj[b].push_back({a,t});
        }
        vector<int>cost(n,INT_MAX);
        vector<int>time(n,INT_MAX);
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
                return cost[src];
            }
            for(auto x:adj[src])
            {
                int v=x.first;
                int t=x.second;
                if(ptime+t<=maxt)
                {
                    // maxtime k under trip ho rhi h
                    if(cost[v]>pcost+fee[v])
                    {
                        cost[v]=pcost+fee[v];
                        time[v]=ptime+t;
                        pq.push({cost[v],time[v],v});
                    }
                    else if(time[v]>t+ptime)
                    {
                        //cost[v]=pcost+fee[v];
                        time[v]=ptime+t;
                        pq.push({pcost+fee[v],time[v],v});
                    } 
                }
               
            }
        }
       
       
        return -1;
        
    }
};