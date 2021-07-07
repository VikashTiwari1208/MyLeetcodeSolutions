class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        
        vector<int>ans;
        int n=nums.size();
        int max_delete=n-k;
        for(int i=0;i<n;i++)
        {
            while(ans.size()&&ans.back()>nums[i]&&max_delete)
            {
                ans.pop_back();
                max_delete--;
            }
            if(ans.size()<k)
            {
                ans.push_back(nums[i]);
            }
            else
            {
                max_delete--;
            }
            //cout<<i<<" "<<max_delete<<" "<<ans.size()<<endl;
        }
        return ans;
    }
};