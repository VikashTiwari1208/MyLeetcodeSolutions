class Solution {
public:
    int n;
    vector<vector<int>>dp;
    int helper(int arr_idx,int dish_idx,vector<int>&arr)
    {
        if(arr_idx>=n)
        {
            return 0;
        }
        if(dp[arr_idx][dish_idx]!=-1)
        {
            return dp[arr_idx][dish_idx];
        }
        int ans1=arr[arr_idx]*(dish_idx+1)+helper(arr_idx+1,dish_idx+1,arr);//lelia
        int ans2=helper(arr_idx+1,dish_idx,arr);//nhi lia
            return dp[arr_idx][dish_idx]=max(ans1,ans2);
    }
    int maxSatisfaction(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         n=arr.size();
        if(arr[n-1]<=0)
        {
            return 0;
        }
        dp.resize(n,vector<int>(n,-1));
        return helper(0,0,arr);
        
    }
};