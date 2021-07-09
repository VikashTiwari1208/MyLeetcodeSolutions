class Solution {
public:
    int maxCoins(vector<int>& nums) {
        
       int n=nums.size(); 
        nums.insert(nums.begin(),1);
        nums.push_back(1);
         
        vector<vector<int>>dp(n+2,vector<int>(n+2,0));
        for(int len=1;len<=n;len++)
        {
            for(int i=1;i<=n-len+1;i++)
            {
                int j=i+len-1;
                for(int ptr=i;ptr<=j;ptr++)
                {
                    //left wle delete nums[ptr] ko delete // right wle delete
                    dp[i][j]=max(dp[i][j],dp[i][ptr-1]+dp[ptr+1][j]+nums[ptr]*nums[i-1]*nums[j+1]);
                }
            }
        }
        return dp[1][n];
    }
};