class Solution {
public:

    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int total_subsets=pow(2,n);
         for(int i=0;i<=total_subsets;i++)
         {
             int currxor=0;
             for(int j=0;j<n;j++)
             {
                 if(i&(1<<j))
                 {
                     currxor^=nums[j];
                 }
             }
             sum+=currxor;
         }
        return sum;
    }
};