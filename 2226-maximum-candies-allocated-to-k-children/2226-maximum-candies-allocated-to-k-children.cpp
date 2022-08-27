class Solution {
public:
    int maximumCandies(vector<int>& v, long long k) {
        int n=v.size();
        int l=0;
        int r=0;
        int ans;
       long long int sum=0;
        for(auto &x:v)
        {
            r=max(r,x);
            sum+=x;
        }
        if(sum<k)
        {
            return 0;
        }
        while(l<=r)
        {
            int mid=l+(r-l)/2;
           long long int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(mid>0)
                {
                    cnt+=v[i]/mid;
                }
            }
            if(cnt>=k||mid==0)
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