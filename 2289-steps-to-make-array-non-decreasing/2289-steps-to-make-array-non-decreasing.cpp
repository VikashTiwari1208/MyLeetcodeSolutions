class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n=nums.size();
        //vector<int>dp(n,0);
        stack<pair<int,int>>st;
        st.push({nums[0],0});
        int ans=0;
       
        for(int i=1;i<n;i++)
        {
            int cnt=0;
            while(st.empty()==false&&st.top().first<=nums[i])
            {
                cnt=max(cnt,st.top().second);
                st.pop();
            }
            if(st.empty()==false)
            {
                cnt++;
            }
            if(st.empty())
            {
                cnt=0;
            }
            //cout<<dp[i]<<" ";
            ans=max(ans,cnt);
            st.push({nums[i],cnt});
        }
        //cout<<endl;
        return ans;
    }
};