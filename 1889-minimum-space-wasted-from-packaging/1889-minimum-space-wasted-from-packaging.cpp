class Solution {
public:
    int minWastedSpace(vector<int>& p, vector<vector<int>>& b) {
        int n=p.size();
        int m=b.size();
        sort(p.begin(),p.end());
        long long int ans=1e12;
      long long   int pre[n];
        pre[0]=p[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+p[i];
        }
        for(int i=0;i<m;i++)
        {
            sort(b[i].begin(),b[i].end());
            vector<int>box=b[i];
            int sz=box.size();
            if(box[sz-1]>=p[n-1])
            {
                int last=0;
                long long int space=0;
                for(auto x:box)
                {
                     int idx=upper_bound(p.begin(),p.end(),x)-p.begin();
                     space+=(long long int)x*(idx-last);
                  //  cout<<space<<" ";
                     last=idx;
                }
                ans=min(ans,space-pre[n-1]);
                ans=ans%1000000007;
            }
        }
        if(ans==1e12)
        {
            return -1;
        }
        return ans%1000000007;
    }
};