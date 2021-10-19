class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        int res=INT_MIN;
        res=max(res,nums[0]);
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
            {
                swap(maxi,mini);
            }
            maxi=max(maxi*nums[i],nums[i]);
            mini=min(mini*nums[i],nums[i]);
            res=max({res,maxi,mini});
        }
        return res;
    }
};