class Solution {
public:
    
    //dp[i][left]
    int check(int curr_idx,int left,vector<int>&arr1,vector<int>&arr2,vector<unordered_map<int,int>>&dp)
    {
        if(curr_idx==arr1.size())
        {
            return 0;
        }
        if(dp[curr_idx].find(left)!=dp[curr_idx].end())
        {
            return dp[curr_idx][left];
        }
        // opttion either to swap or to //continue 
        int res1,res2;
        if(arr1[curr_idx]>left)
        {
            res1=check(curr_idx+1,arr1[curr_idx],arr1,arr2,dp);
        }
        else
        {
            res1=INT_MAX;
        }
        int req=upper_bound(arr2.begin(),arr2.end(),left)-arr2.begin();
        if(req==arr2.size())
        {
            res2=INT_MAX;
        }
        else
        {
            res2=check(curr_idx+1,arr2[req],arr1,arr2,dp);
        }
        if(res2==INT_MAX)
        {
            dp[curr_idx][left]=res1;
        }
        else
        {
            dp[curr_idx][left]=min(res1,res2+1);
        }
        return dp[curr_idx][left];
    }
    
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        sort(arr2.begin(),arr2.end());
        
        vector<unordered_map<int,int>>dp(2001);
        int ans=check(0,INT_MIN,arr1,arr2,dp);
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};