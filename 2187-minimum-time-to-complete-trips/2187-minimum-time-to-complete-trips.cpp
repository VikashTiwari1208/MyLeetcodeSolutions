class Solution {
public:
    long long minimumTime(vector<int>& time, int total) {
        int n=time.size();
       long long int l=1;
        long long int r=(long long int)total*(*min_element(time.begin(),time.end()));
        long long int ans=0;
        while(l<=r)
        {
            long long int mid=l+(r-l)/2;
            long long int curr=0;
            for(int i=0;i<n;i++)
            {
                 curr+=mid/(time[i]);
                if(curr>=total)
                {
                    break;
                }
            }
            if(curr>=total)
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