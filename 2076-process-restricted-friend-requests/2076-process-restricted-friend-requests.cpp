class Solution {
public:
    vector<int>parent;
    vector<int>ranks;
    int cn;
    int find(int src)
    {
        if(parent[src]==src)
        {
         return src;
        }
       return parent[src]=find(parent[src]);
    }
    void merge(int a,int b)
    {
        int srca=find(a);
        int srcb=find(b);
        if(srca==srcb)
        {
            return ;
        }
        cn--;
        if(ranks[srca]>ranks[srcb])
        {
            parent[srcb]=srca;
            ranks[srca]+=srcb;
        }
        else
        {
            parent[srca]=srcb;
            ranks[srcb]+=srca;
        }
    }
    vector<bool> friendRequests(int n, vector<vector<int>>& rest, vector<vector<int>>& req) {
        parent.resize(n);
        ranks.resize(n);
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
            ranks[i]=1;
        }
        vector<bool>ans;
        for(int i=0;i<req.size();i++)
        {
            int fa=req[i][0];
            int fb=req[i][1];
            int pa=find(fa);
            int pb=find(fb);
            bool flag=true;
            for(int j=0;j<rest.size();j++)
            {
                int ra=find(rest[j][0]);
                int rb=find(rest[j][1]);
                if((pa==ra&&pb==rb)||(pa==rb&&pb==ra))
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                merge(pa,pb);
            }
            ans.push_back(flag);
        }
        
        
        return ans;
        
    }
};