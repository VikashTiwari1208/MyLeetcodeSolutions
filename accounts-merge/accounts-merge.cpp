class Solution {
public:
    vector<int>parent;
    vector<int>ranks;
    int find(int x)
    {
        if(parent[x]==x)
        {
            return x;
        }
        return parent[x]=find(parent[x]);
    }
    void merge(int src1,int src2)
    {
        int a=find(src1);
        int b=find(src2);
        if(a!=b)
        {
              if(ranks[a]>ranks[b])
               {
                  parent[b]=a;
                  ranks[a]+=ranks[b];
               }
               else
               {
                  parent[a]=b;
                  ranks[b]+=ranks[a];
               }
        }
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
        parent.resize(n);
        ranks.resize(n,1);
       unordered_map<string,int>email;
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
            int m=accounts[i].size();
            for(int j=1;j<m;j++)
            {
                if(email.find(accounts[i][j])!=email.end())
                {
                    merge(i,email[accounts[i][j]]);
                }
                else
                {
                    email[accounts[i][j]]=i;
                }
            }
        }
        unordered_map<int,vector<string>>mp;
        for(auto x:email)
        {
            int root1=find(x.second);
            mp[root1].push_back(x.first);
        }
        vector<vector<string>>res;
        for(auto x:mp)
        {
            string name=accounts[x.first][0];
            vector<string>temp;
            temp.push_back(name);
            for(auto str:x.second)
            {
                temp.push_back(str);
            }
            sort(temp.begin()+1,temp.end());
            res.push_back(temp);
        }
        return res;
    }
};