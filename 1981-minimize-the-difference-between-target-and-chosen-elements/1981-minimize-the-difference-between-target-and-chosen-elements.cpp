class Solution {
public:
   // int dp[72][5000];
    //int ans=50000;
    /*int helper(vector<vector<int>>&mat,int idx,int target,int sum)
    {
        int n=mat.size();
        if(idx>=n)
        {
          return abs(sum-target);
        }
        if(dp[idx][sum]!=-1)
        {
            return dp[idx][sum];
        }
        int m=mat[0].size();
        int ans=50000;
        for(int i=0;i<m;i++)
        {
            ans=min(ans,helper(mat,idx+1,target,sum+mat[idx][i]));
            if(ans==0)
            {
                break;
            }
        }
        return dp[idx][sum]=ans;
    } */
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        bitset<5000> p(1);
        for (auto& r : mat) {
            bitset<5000> tmp;
            for (auto& i : r) {
                tmp = tmp | (p << i);
            }
            swap(p,tmp);
        }
        int res = 10000;
        for (int i = 0; i < 5000; ++i) {
            if (p[i]) res = min(res, abs(i - target));
        }
        return res;
    }
};