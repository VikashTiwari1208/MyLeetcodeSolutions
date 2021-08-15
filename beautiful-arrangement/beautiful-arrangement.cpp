class Solution {
public:
    int count=0;
    void helper(int idx,int n,vector<int>&vis)
    {
        if(idx>n)
        {
            count++;
            return ;
        }
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==-1&&(i%idx==0||idx%i==0))
            {
                vis[i]=1;
                helper(idx+1,n,vis);
                vis[i]=-1;
            }
        }
    }
    int countArrangement(int n) {
        vector<int>vis(n+1,-1);
        helper(1,n,vis);
        return count;
    }
};