class Solution {
public:
    int maxDistance(vector<int>& v, int m) {
        sort(v.begin(),v.end());
        int n=v.size();
        int l=0;
        int r=v[n-1]-v[0];
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int last=v[0];
            int cnt=1;
            for(int i=1;i<n;i++)
            {
                if(v[i]-last>=mid)
                {
                    cnt++;
                    last=v[i];
                }
            }
            if(cnt>=m)
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