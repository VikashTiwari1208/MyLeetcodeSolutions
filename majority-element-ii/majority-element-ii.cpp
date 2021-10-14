class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int num1=-1;
        int cnt1=0;
        int num2=-1;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1)
            {
                cnt1++;
            }
            else if(num2==nums[i])
            {
                cnt2++;
            }
            else if(cnt1==0)
            {
                cnt1=1;
                num1=nums[i];
            }
            else if(cnt2==0)
            {
                 cnt2=1;
                num2=nums[i];
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ans;
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1)
            {
                cnt1++;
            }
           else if(nums[i]==num2)
            {
                cnt2++;
            }
        }
        if(cnt1>n/3)
        {
            ans.push_back(num1);
        }
         if(cnt2>n/3)
        {
            ans.push_back(num2);
        }
        return ans;
    }
};