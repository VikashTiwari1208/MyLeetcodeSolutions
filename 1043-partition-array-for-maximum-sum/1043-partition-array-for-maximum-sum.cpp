class Solution {
public:
    int dp[501];
    int helper(vector<int>&arr,int idx,int &k)
    {
        int n=arr.size();
        if(idx>=n)
        {
            return 0;
        }
        if(dp[idx]!=-1)
        {
            return dp[idx];
        }
        int ans=0;
        int maxi=-1;
        for(int len=1;len<=k;len++)
        {
            if(len+idx-1<n)
            {
                maxi=max(maxi,arr[idx+len-1]);
                int temp=maxi*len+helper(arr,idx+len,k);
                ans=max(ans,temp);
            }
        }
        return dp[idx]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
     memset(dp,-1,sizeof(dp));    
     return helper(arr,0,k);
    }
};