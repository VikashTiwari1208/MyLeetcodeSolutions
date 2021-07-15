class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        stack<int>s;
        for(int i=1;i<=2;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                while(s.size()&&s.top()<=nums[j])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    ans[j]=-1;
                }
                else
                {
                    ans[j]=s.top();
                }
                s.push(nums[j]);
            }
        }
        return ans;
    }
};