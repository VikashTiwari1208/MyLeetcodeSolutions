class Solution {
public:
    vector<int>parent,ranks;
    int find(int x)
    {
        if(parent[x]==x)
        {
            return x;
        }
        return parent[x]=find(parent[x]);
    }
    bool merge(int a,int b)
    {
        int para=find(a);
        int parb=find(b);
        if(para==parb)
        {
            return false;
        }
        if(ranks[para]>ranks[parb])
        {
            parent[parb]=para;
            ranks[para]+=ranks[parb];
        }
         if(ranks[parb]>=ranks[para])
        {
            parent[para]=parb;
            ranks[parb]+=ranks[para];
        }
        return true;
    }
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        parent.resize(n+1);
        ranks.resize(n+1,1);
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
        }
        int edge=0;
        int total=edges.size();
        for(int i=0;i<total;i++)
        {
            int tp=edges[i][0];
            int u=edges[i][1];
            int v=edges[i][2];
            if(tp==3&&merge(u,v))
            {
                //cout<<tp<<" "<<u<<" "<<v<<endl;
                edge++;
            }
        }
        vector<int>temp=parent;
        int alice=edge;
        for(int i=0;i<total;i++)
        {
            int tp=edges[i][0];
            int u=edges[i][1];
            int v=edges[i][2];
            if(tp==1&&merge(u,v))
            {
               // cout<<tp<<" "<<u<<" "<<v<<endl;
                alice++;
            }
        }
        parent=temp;
        int bob=edge;
        for(int i=0;i<total;i++)
        {
            int tp=edges[i][0];
            int u=edges[i][1];
            int v=edges[i][2];
            if(tp==2&&merge(u,v))
            {
                //cout<<tp<<" "<<u<<" "<<v<<endl;
                bob++;
            }
        }
        if(alice!=n-1||bob!=n-1)
        {
            return -1;
        }
       // cout<<total<<" "<<edge<<endl;
        return total-(alice+bob-edge);
    }
};