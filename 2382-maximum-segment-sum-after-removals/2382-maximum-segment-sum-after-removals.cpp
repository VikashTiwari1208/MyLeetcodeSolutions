class Solution {
public:
    vector<long long>parent,ranks;
    int find(int x)
    {
        if(parent[x]==-1)
        {
            return x;
        }
        return parent[x]=find(parent[x]);
    }
    void merge(int a,int b)
    {
        int para=find(a);
        int parb=find(b);
        if(para!=parb)
        {
            if(ranks[para]>ranks[parb])
            {
                ranks[para]+=ranks[parb];
                parent[parb]=para;
            }
            else
            {
                 ranks[parb]+=ranks[para];
                parent[para]=parb;
            }
        }
    }
    vector<long long> maximumSegmentSum(vector<int>& nums, vector<int>& q) {
        
        int n=nums.size();
        vector<long long>ans(n);
        ranks.resize(n,0);
        parent.resize(n,-1);
        int sz=q.size();
        ans[n-1]=0;
        //long long  last=0;
        for(int i=sz-1;i>=1;i--)
        {
            int idx=q[i];
            int curr=find(idx);
            ranks[curr]+=nums[idx];
            if(idx-1>=0)
            {
                 int prev=find(idx-1);
                if(ranks[prev]>0)
                {
                    merge(curr,prev);
                }
            }
            if(idx+1<n)
            {
              int next=find(idx+1);
                if(ranks[next]>0)
                {
                    merge(curr,next);
                }
            }
            curr=find(curr);
            //cout<<ranks[curr]<<endl;
            ans[i-1]=max(ans[i],ranks[curr]);
            //last=ans[i-1];
        }
        return ans;
    }
};