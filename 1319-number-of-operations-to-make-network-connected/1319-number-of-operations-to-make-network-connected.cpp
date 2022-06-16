class Solution {
public:
    //sz of cc 
    vector<int>parent;
    vector<int>ranks;
    int cn;
    int find(int src)
    {
        if(parent[src]==-1)
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
    int makeConnected(int n, vector<vector<int>>& conn) {
           int edges=conn.size();
        if(edges<n-1)
        {
            return -1;
        }
        cn=n;
        parent.resize(n,-1);
        ranks.resize(n,-1);
        for(auto x:conn)
        {
            merge(x[0],x[1]);
        }
        return cn-1;
    }
};