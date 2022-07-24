class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int max_so_far=0;
        int curr_sum=0;
        int curr_sum2=0;
        int min_so_far=0;
        for(int i=0;i<n;i++)
        {
            curr_sum+=nums[i];
            curr_sum2+=nums[i];
            if(curr_sum<0)
            {
                //ans=max(ans,abs(curr_sum));
                curr_sum=0;
            }
            else
            {
                max_so_far=max(max_so_far,curr_sum);
            }
            if(curr_sum2>0)
            {
                curr_sum2=0;
            }
            else
            {
                min_so_far=min(min_so_far,curr_sum2);
            }
        }
        ans=max(abs(min_so_far),max_so_far);
        return ans;
    }
};