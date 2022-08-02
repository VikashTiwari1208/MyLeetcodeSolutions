class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        int dp[n];
        dp[0]=nums[0];
        multiset<int>s;
        s.insert(dp[0]);
        for(int i=1;i<n;i++)
        {
            if(i>k)
            {
                s.erase(s.find(dp[i-k-1]));
            }
            dp[i]=nums[i]+*s.rbegin();
            s.insert(dp[i]);
        }
        return dp[n-1];
    }
};