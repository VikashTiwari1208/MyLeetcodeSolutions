class Solution {
public:
    bool isPos(vector<int>&nums,int max_sum,int m)
    {
        int cnt=1;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max_sum)
            {
                return false;
            }
            sum+=nums[i];
            if(sum>max_sum)
            {
                cnt++;
                sum=nums[i];
            }
        }
        if(cnt<=m)
        {
            return true;
        }
        return false;
    }
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        int r=accumulate(nums.begin(),nums.end(),(int)0);
        int l=*max_element(nums.begin(),nums.end());
        int ans;
        while(l<=r)
        {
            int mid=(l)+(r-l)/2;
            if(isPos(nums,mid,m))
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