class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans=0;
        int n=nums.size();
        int l=-1,r=0;
        int last_valid=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>right)
            {
               last_valid=0;
                l=i;
            }
            else if(nums[i]<left)
            {
                ans+=last_valid;
            }
            else
            {
               last_valid=i-l;
                ans+=last_valid;
            }
            
        }
        return ans;
    }
};