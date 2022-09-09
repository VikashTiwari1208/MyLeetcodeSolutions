class Solution {
public:
    long long maxRunTime(int n, vector<int>&v) {
        long long  ans=0;
       long long  l=0;
        long long  r=0;
        for(auto x:v)
        {
            r+=x;
        }
        r=r/n;
        sort(v.begin(),v.end());
        while(l<=r)
        {
            long long  mid=l+(r-l)/2;
            long long sum=0;
            int cnt=0;
            for(auto x:v)
            {
              sum+=x;
                if(sum>=mid)
                {
                    sum-=mid;
                    cnt++;
                }
            }
                        
            if(cnt>=n)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return ans;
    }
};