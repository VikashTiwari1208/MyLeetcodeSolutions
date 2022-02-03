class Solution {
public:
    vector<int>dp;
     int mini=INT_MIN;
    int helper(int idx,vector<int>&s)
    {
        int n=s.size();
        if(idx>=n)
        {
            return 0;
        }
        if(dp[idx]!=-1)
        {
            return dp[idx];
        }
         int ans=mini;
        int sum=0;
        for(int i=idx;i<min(idx+3,n);i++)
        {
            sum+=s[i];
            ans=max(ans,sum-helper(i+1,s));
        }
        return dp[idx]=ans;
    }
    string stoneGameIII(vector<int>& stone) {
        int n=stone.size();
        dp.resize(n,-1);
        int val=helper(0,stone);
        if(val>0)
        {
           return "Alice";
        }
        else if(val<0)
        {
            return "Bob";
        }
        return "Tie";
        
    }
};