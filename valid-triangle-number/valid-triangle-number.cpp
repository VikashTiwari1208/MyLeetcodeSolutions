class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=i+2;
            while(j<n-1&&nums[i]!=0)
            {
                while(k<n&&nums[i]+nums[j]>nums[k])
                {
                    k++;
                }
                ans+=k-j-1;
                    j++;
            }
        }
        return ans;
    }
};