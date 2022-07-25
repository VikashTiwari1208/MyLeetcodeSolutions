class Solution {
public:
    int dp[31][300005];// length of subset,sum
    vector<vector<int>>memo;
    int tn;
    int tsum=0;
    bool helper(int idx,int curr_sum,int sz,vector<int>&nums)
    {
        int n=nums.size();
        if(idx>=n)
        {
          if(sz>0&&sz<n&&(float)curr_sum/sz==(float)(tsum-curr_sum)/(n-sz))
            return true;
            return false;
        }
        if(memo[idx][curr_sum]&(1<<sz))
        {
            return dp[idx][curr_sum];
        }
        bool ans=false;
        memo[idx][curr_sum]|=(1<<sz);
        ans=ans||(helper(idx+1,curr_sum+nums[idx],sz+1,nums))||helper(idx+1,curr_sum,sz,nums);
        return dp[idx][curr_sum]=ans;
    }
    
    bool splitArraySameAverage(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        tn=n;
        for(auto x:nums)
        {
            tsum+=x;
        }
        memo.resize(nums.size(),vector<int>(tsum+1,0));
        // dp[i][j] tells whether sum of jth using i elemets is possible or not;
        return helper(0,0,0,nums);
    }
};