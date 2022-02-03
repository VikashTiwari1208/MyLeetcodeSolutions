class Solution {
public:
    vector<int>dp;
    long long int mini=-1e10;
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
        long long int ans=mini;
        int sum=0;
        for(int i=idx;i<min(idx+3,n);i++)
        {
            sum+=s[i];
            long long int temp=min({helper(i+2,s),helper(i+3,s),helper(i+4,s)});
            ans=max(ans,sum+temp);
        }
        return dp[idx]=ans;
    }
    string stoneGameIII(vector<int>& stone) {
        int n=stone.size();
        dp.resize(n,-1);
        int val=helper(0,stone);
        int sum=accumulate(stone.begin(),stone.end(),(int)0);
        if(val>sum-val)
        {
           return "Alice";
        }
        else if(val<sum-val)
        {
            return "Bob";
        }
        return "Tie";
        
    }
};