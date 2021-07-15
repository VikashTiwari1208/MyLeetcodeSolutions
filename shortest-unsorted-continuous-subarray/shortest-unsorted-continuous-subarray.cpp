class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=nums.size()-1;
        vector<int>temp=nums;
        sort(nums.begin(),nums.end());
        while(i<n&&nums[i]==temp[i])
        {
            i++;
        }
        while(j>=i&&nums[j]==temp[j])
        {
            j--;
        }
        return j-i+1;
    }
};