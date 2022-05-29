class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);
        stack<pair<int,int>>st;
        st.push({nums[0],0});
        int ans=0;
       
        for(int i=1;i<n;i++)
        {
            while(st.empty()==false&&st.top().first<=nums[i])
            {
                dp[i]=max(dp[i],dp[st.top().second]);
                st.pop();
            }
            if(st.empty()==false)
            {
                dp[i]++;
            }
            if(st.empty())
            {
                dp[i]=0;
            }
            cout<<dp[i]<<" ";
            ans=max(ans,dp[i]);
            st.push({nums[i],i});
        }
        cout<<endl;
        return ans;
    }
};