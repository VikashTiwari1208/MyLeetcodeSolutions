class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long int pre[n];
        pre[0]=nums[0];
       long long int sum=nums[0];
        for(int i=1;i<n;i++)
        {
            sum+=nums[i];
            pre[i]=pre[i-1]+nums[i];
        }
        long long int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(pre[i]>=sum-pre[i])
            {
                ans++;
            }
        }
        return ans;
    }
};