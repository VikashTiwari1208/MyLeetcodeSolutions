class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        vector<int>dis(n,(int)5e6);
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<n;i++)
        {
            if(i>0&&i<n-1&&arr[i]==arr[i+1]&&arr[i]==arr[i-1])
            {
                continue;
            }
            adj[arr[i]].push_back(i);
        }
        queue<int>q;
        q.push(0);
        dis[0]=0;
        while(q.empty()==false)
        {
            int x=q.front();
            q.pop();
            if(x-1>=0&&dis[x-1]>dis[x]+1)
            {
                dis[x-1]=dis[x]+1;
                q.push(x-1);// can go to i-1 index
            }
            if(x+1<n&&dis[x+1]>dis[x]+1)
            {
                dis[x+1]=dis[x]+1;
                q.push(x+1);
            }
            for(auto y:adj[arr[x]])
            {
            
                if(y==x)
                {
                    continue;
                }
                if(dis[y]>dis[x]+1)
                {
                    dis[y]=dis[x]+1;
                    q.push(y);
                }
            }
        }
        return dis[n-1];
    }
};