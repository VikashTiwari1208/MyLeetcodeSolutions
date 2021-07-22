class Solution {
public:
    int maxSum(vector<int>&nums)
    {
        int n=nums.size();
        int curr_max=0;
        int max_so_far=INT_MIN;
        for(int i=0;i<n;i++)
        {
            curr_max+=nums[i];
            if(max_so_far<curr_max)
            {
                max_so_far=curr_max;
            }
            if(curr_max<0)
            {
                curr_max=0;
            }
        }
        return max_so_far;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
         int n=nums.size();
        int kdanesSum=maxSum(nums);
        int TotalSum=0;
        for(int i=0;i<n;i++)
        {
            TotalSum+=nums[i];
            nums[i]=-nums[i];
        }
        int Csum=maxSum(nums);
        cout<<Csum<<" "<<TotalSum<<" "<<kdanesSum;
        if(TotalSum+Csum==0)
        {
            return kdanesSum;
        }
        return max(kdanesSum,TotalSum+Csum);
    }
    
};