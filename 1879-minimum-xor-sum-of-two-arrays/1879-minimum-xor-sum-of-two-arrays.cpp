class Solution {
public:
    vector<vector<int>>dp; 
    int helper(vector<int>&a,vector<int>&b,int idx,int mask)
    {
        int n=a.size();
        if(idx==n)
        {
            return 0;
        }
        if(dp[idx][mask]>-1)
        {
            return dp[idx][mask];
        }
        long long int ans=INT64_MAX;
        for(int i=0;i<n;i++)
        {
            if((mask&(1<<i))==0)
            {
               int n_mask=mask|(1<<i);
                long long int temp=a[idx]^b[i];
                ans=min(ans,temp+helper(a,b,idx+1,n_mask));
            }
        }
        return dp[idx][mask]=ans;
    }
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
       dp.resize(n+1,vector<int>((1<<n)+1,-1));
        return helper(nums1,nums2,0,0);
    }
};