class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int mini=INT_MIN;
        if(nums.size()==1)
        {
            return 0;
        }
        nums.insert(nums.begin(),mini);
        nums.push_back(mini);
        int l=0;
        int r=nums.size()-1;
        int ans;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[mid+1])
            {
                ans=mid;
                r=mid-1;
            }
           else
           {
               l=mid+1;
           }
                
        }
        return ans-1;
    }
};