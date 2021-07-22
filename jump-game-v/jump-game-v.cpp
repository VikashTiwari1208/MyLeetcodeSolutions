class Solution {
public:
    int maxJumps(vector<int>& arr, int d) {
        int n=arr.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        vector<int>dp(n,1);
        int ans=1;
        for(int i=0;i<n;i++)
        {
           int curr_no=v[i].first;
            int maxi=1;
            int idx=v[i].second;
            //left
            for(int j=idx-1;j>=max(0,idx-d);j--)
            {
                if(curr_no==12)
                {
                    cout<<arr[j]<<" "<<dp[j]<<" ";
                }
                if(arr[j]<arr[idx])
                {
                    maxi=max(maxi,1+dp[j]);
                }
                else
                {
                    break;
                }
            }
            //right
            for(int j=idx+1;j<=min(n-1,idx+d);j++)
            {
                if(arr[j]<arr[idx])
                {
                    maxi=max(maxi,1+dp[j]);
                }
                else
                {
                    break;
                }
            }
            dp[idx]=maxi;
            cout<<v[i].first<<" "<<maxi<<endl;
            ans=max(ans,dp[idx]);
        }
        return ans;
    }
};