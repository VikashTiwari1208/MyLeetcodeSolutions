class Solution {
public:
    void helper(int idx,int n,int &sum,int curr_xor,vector<int>nums)
    {
        if(idx==n)
        {
            sum+=curr_xor;
            return ;
        }
        helper(idx+1,n,sum,curr_xor,nums);
        helper(idx+1,n,sum,curr_xor^nums[idx],nums);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int curr_xor=0;
        helper(0,n,sum,curr_xor,nums);
        return sum;
    }
};