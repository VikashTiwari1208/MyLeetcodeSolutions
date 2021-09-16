class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=nums[i]+pre[i-1];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans[i]=nums[i]*i+pre[n-1]-pre[i]-(nums[i]*(n-i-1));
            }
            else
            {
              ans[i]=nums[i]*i+pre[n-1]-pre[i]-(pre[i-1])-(nums[i]*(n-i-1));    
            }
            
        }
        return ans;
    }
};