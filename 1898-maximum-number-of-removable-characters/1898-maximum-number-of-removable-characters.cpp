class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>&v){
        int n=s.length();
        int r=v.size();
        int m=p.length();
        int l=0;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            string temp=s;
            for(int i=0;i<mid;i++)
            {
                temp[v[i]]='##';
            }
            int i=0;
            int j=0;
            while(i<n&&j<m)
            {
                if(temp[i]==p[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    i++;
                }
            }
            if(j==m)
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