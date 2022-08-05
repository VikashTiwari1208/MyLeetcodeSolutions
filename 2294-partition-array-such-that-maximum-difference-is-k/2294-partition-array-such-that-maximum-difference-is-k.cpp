class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int grp=1;
        int mini=-1;
        int maxi=-1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(mini==-1&&maxi==-1)
            {
                mini=nums[i];
                maxi=nums[i];
            }
            if(nums[i]-mini>k)
            {
                mini=nums[i];
                grp++;
                maxi=nums[i];
            }
            else
            {
                maxi=nums[i];
            }
        }
        return grp;
    }
};