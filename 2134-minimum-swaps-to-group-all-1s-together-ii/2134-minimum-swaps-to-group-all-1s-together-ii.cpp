class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0;
        for(auto x:nums)
        {
            if(x==1)
            {
                cnt1++;
            }
        }
        int sz=cnt1;
        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
        }
        int ans=2*n+1;
        int cnt0=0;
        for(int i=0;i<sz;i++)
        {
            if(nums[i]==0)
            {
                cnt0++;
            }
        }
        ans=min(ans,cnt0);
        for(int i=1;i<=2*n-sz;i++)
        {
            if(nums[i-1]==0)
            {
                cnt0--;
            }
            if(nums[i+sz-1]==0)
            {
                cnt0++;
            }
            ans=min(ans,cnt0);
        }
        return ans;
    }
};