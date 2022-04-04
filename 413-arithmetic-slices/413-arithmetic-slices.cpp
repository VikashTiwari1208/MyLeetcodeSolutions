class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)
        {
            return 0;
        }
        if(n==3)
        {
            if(nums[1]-nums[0]==nums[2]-nums[1])
            {
                return 1;
            }
            return 0;
        }
        vector<int>dp(n,0);
            if(nums[1]-nums[0]==nums[2]-nums[1])
            {
                dp[2]=1;
            }
        int sum=dp[2];
        for(int i=3;i<n;i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
            {
                dp[i]=dp[i-1]+1;
                sum+=dp[i];
            }
        }
        return sum;
    }
};