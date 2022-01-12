class Solution {
public:
    
    int maxSatisfaction(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(arr[n-1]<=0)
        {
            return 0;
        }
        int ans=0;
        int curr_sum=0;
        int suff_sum=0;
        for(int i=n-1;i>=0;i--)
        {
            suff_sum+=arr[i];
            curr_sum+=suff_sum;
            ans=max(ans,curr_sum);
            
        }
        return ans;
    }
};