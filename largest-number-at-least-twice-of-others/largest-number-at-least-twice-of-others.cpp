class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        bool flag=true;
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maxi)
            {
                idx=i;
            }
            else
            {
                if(maxi<2*nums[i])
                {
                    flag=false;
                }
            }
        }
        if(flag)
        {
            return idx;
        }
        return -1;
    }
};