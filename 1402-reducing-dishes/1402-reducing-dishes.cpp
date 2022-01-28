class Solution {
public:
    vector<vector<int>>dp;
    int helper(vector<int>&arr,int idx,int time)
    {
        int n=arr.size();
        if(idx==n)
        {
            return 0;
        }
        if(dp[idx][time]!=-1)
        {
            return dp[idx][time];
        }
        int taken=arr[idx]*time+helper(arr,idx+1,time+1);
        int nottaken=helper(arr,idx+1,time);
        return dp[idx][time]=max(taken,nottaken);
    }
    int maxSatisfaction(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int n=arr.size();
        dp.resize(n+1,vector<int>(n+1,-1));
        return helper(arr,0,1);
    }
};