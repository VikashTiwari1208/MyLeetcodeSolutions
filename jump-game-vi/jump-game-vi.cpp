class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int> dp(n,INT_MIN);
        dp[0]=nums[0];
        multiset<int>st;
        st.insert(dp[0]);
        for(int i=1;i<n;i++)
        {
            if(i>k)
            {
                st.erase(st.find(dp[i-k-1]));
            }
            dp[i]=max(dp[i],nums[i]+*st.rbegin());
            st.insert(dp[i]);
        }
        return dp[n-1];
    }
};