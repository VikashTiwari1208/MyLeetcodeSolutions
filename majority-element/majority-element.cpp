class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1;
        int num=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==num)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
            if(cnt==0)
            {
                cnt=1;
                num=nums[i];
            }
          
        }
        return num;
    }
};