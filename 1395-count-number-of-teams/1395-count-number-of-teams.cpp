class Solution {
public:
    int numTeams(vector<int>& arr) {
        int n=arr.size();
       vector<int>gl(n,0),gr(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[j]>arr[i])
                {
                    gl[i]++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    gr[i]++;
                }
            }
        }
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
           ans+=(i-gl[i])*gr[i]+gl[i]*((n-i-1-gr[i]));
        }
        return ans;
    }
};