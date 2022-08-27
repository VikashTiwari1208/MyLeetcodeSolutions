class Solution {
public:
    int minimizedMaximum(int n, vector<int>& v) {
        int sz=v.size();
        long long int sum=0;
        for(auto x:v)
        {
            sum+=x;
        }
        int l=1;
       long long int r=sum;
        long long int ans=0;
        while(l<=r)
        {
            long long int mid=l+(r-l)/2;
           long long int cnt=0;
            for(int i=0;i<sz;i++)
            {
                if(v[i]<=mid)
                {
                    cnt++;
                }
                else
                {
                    cnt+=v[i]/mid;
                    long long int rem=v[i]%mid;
                    if(rem>0)
                    {
                        cnt++;
                    }
                }
            }
            if(cnt<=n)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};