class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
       long long int ans=0;
      long long  int ops=k1+k2;
        priority_queue<long  long int>pq;
        unordered_map<long long int,long long int>cnt;
        int n=nums1.size();
        for(int i=0;i<n;i++)
        {
            pq.push(abs(nums1[i]-nums2[i]));
            cnt[abs(nums1[i]-nums2[i])]++;
        }
        while(pq.size()>0&&ops>0)
        {
            auto x=pq.top();
            pq.pop();
             long long  int frq=cnt[x];// cnt of max diff;
                int mn=min(ops,frq);
                cnt[x]-=mn;
                if(mn>0)
                {
                    ops-=mn;
                    int val=x;
                    val--;
                 if(val>0)
                 {
                    cnt[val]+=mn;
                   pq.push(val);
                 }
                }
                if(cnt[x]>0)
                {
                    pq.push(x);
                }
        }
        for(auto x:cnt)
        {
            ans+=x.first*x.second*x.first;
        }
        return ans;
    }
};