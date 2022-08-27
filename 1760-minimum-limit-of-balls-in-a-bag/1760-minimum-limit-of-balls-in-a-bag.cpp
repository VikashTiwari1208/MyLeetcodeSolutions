class Solution {
public:
    int minimumSize(vector<int>& nums, int opr) {
        int l=1;
        int n=nums.size();
        int r=0;
        for(auto &x:nums)
        {
            r=max(r,x);
        }
        int ans;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(nums[i]>mid)
                {
                    if(nums[i]%mid==0)
                    {
                        cnt+=(nums[i]/mid)-1;
                    }
                    else
                    {
                        cnt+=(nums[i]/mid);
                    }
                }
            }
            if(cnt<=opr)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};