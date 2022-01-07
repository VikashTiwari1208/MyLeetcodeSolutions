class Solution {
public:
    map<int,set<int>>mp;
    bool helper(vector<int>&a,vector<int>&b,set<int>&s1)
    {
      
      // mp[i]=s1;
        for(auto x:b)
        {
            if(s1.find(x)!=s1.end())
            {
                return true;
            }
        }
        return false;
    }
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source==target)
        {
            return 0;
        }
        int n=routes.size();
        map<int,vector<int>>adj;
        
        for(int i=0;i<n;i++)
        {
            set<int>s;
            for(auto x:routes[i])
            {
                s.insert(x);
            }
            mp[i]=s;
            for(int j=i+1;j<n;j++)
            {
                if(helper(routes[i],routes[j],mp[i]))
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
         
        queue<pair<int,int>>q;
        // bus,dis;
        for(int i=0;i<n;i++)
        {
            if(mp[i].find(source)!=mp[i].end())
            {
                q.push({i,0});
            }
        }
       
        set<int>vis;
        while(q.empty()==false)
        {
            auto x=q.front();
            q.pop();
            int bus=x.first;
            int dis=x.second;
           // cout<<bus<<endl;
            vis.insert(bus);
            if(mp[bus].find(target)!=mp[bus].end())
            {
                return dis+1;
            }
            for(auto el:adj[bus])
            {
                //cout<<el<<" ";
                if(vis.find(el)==vis.end())
                {
                    q.push({el,dis+1});
                }
            }
        }
        return -1;
    }
};