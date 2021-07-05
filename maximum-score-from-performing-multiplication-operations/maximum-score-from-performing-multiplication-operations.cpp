class Solution {
public:
  int dp[1000][1000];
  // i--> left se kitne utha lie nums se'
  // j refers to current idx in multipliers
  int n,m;
  int solve(int i,int j,vector<int>&nums,vector<int>&mult)
  {
    if(i>=m||j>=m)
    {
      return 0;
    }
    if(dp[i][j]!=-1)
    {
      return dp[i][j];
    }
    int frst=nums[i]*mult[j]+solve(i+1,j+1,nums,mult); //pick left
    int second=nums[n-(j-i)-1]*mult[j]+solve(i,j+1,nums,mult);//pick rigth
    return dp[i][j]=max(frst,second);
  }
    int maximumScore(vector<int>& nums, vector<int>& mult) {
     
      memset(dp,-1,sizeof(dp));
       n=nums.size();
       m=mult.size();
    return solve(0,0,nums,mult);
    }
};