class Solution {
public:
   long long int dp[25][25];
     int solve(int i,int j,vector<int>&nums)
    {
         if(i>j)
         {
             return 0;
         }
         if(i==j)
         {
             return nums[i];
         }
         
     
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
       long long int op1=nums[i]-solve(i+1,j,nums);
       long long  int op2=nums[j]-solve(i,j-1,nums);
        return dp[i][j]=max({op1,op2});
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
          int s=solve(0,n-1,nums);
        return s>=0;
    }
};