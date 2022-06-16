class Solution {
public:
    unordered_map<int,vector<int>>adj;
   // vector<int>vis;
    vector<int>vis2;
    void dfs(int src,vector<int>&nums)
    {
        if(vis2[nums[src]]==1)
        {
            return ;
        }
        vis2[nums[src]]=1;
        for(auto x:adj[src])
        {
            if(vis2[nums[x]]==-1)
            {
                dfs(x,nums);
            }
        }
    }
    vector<int> smallestMissingValueSubtree(vector<int>& par, vector<int>& nums) {
        int n=par.size();
       // vis.resize(n,-1);
        vis2.resize(1e5+3,-1);
        for(int i=1;i<n;i++)
        {
          adj[par[i]].push_back(i);   
        }
        int node=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                node=i;
                break;
            }
        }
        vector<int>ans;
        ans.resize(n,1);
       
        if(node==-1)
        {
            return ans;
        }
        int curr_mini=2;
       // cout<<node<<" ";
        while(node>-1)
        {
            dfs(node,nums);
            while(vis2[curr_mini]==1)
            {
                curr_mini++;
            }
            ans[node]=curr_mini;
          //  cout<<node<<" "<<curr_mini<<endl;
            node=par[node];
        }
        return ans;
    }
};