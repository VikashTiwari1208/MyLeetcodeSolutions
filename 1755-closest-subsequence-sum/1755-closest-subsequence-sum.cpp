class Solution {
public:
    void generate_subset_sum(int index,int end,set<int>&s,int sum,vector<int>&nums)
    {
        if(index==end)
        {
            s.insert(sum);
           return ;
        }
        generate_subset_sum(index+1,end,s,sum,nums);
        generate_subset_sum(index+1,end,s,sum+nums[index],nums);
        
    }
    int minAbsDifference(vector<int>& nums, int goal) {
        int n=nums.size();
        vector<int>s1{0};
        vector<int>s2{0};
      for (int i = 0; i < (n / 2); i++) {
             int v = s1.size();
            for (int t = 0; t < v; t++) {
                s1.push_back(s1[t] + nums[i]);
            }
        }
        
        for (int i = (n / 2); i < n; i++) {
             int v = s2.size();
            for (int t = 0; t < v; t++) {
                s2.push_back(s2[t] + nums[i]);
            }
        }
         int ans=1e9;
         set<int> s(s2.begin(), s2.end());
        for(auto x:s1)
        {
            int val=goal-x;
            auto itr=s.lower_bound(val);
            if(itr!=s.end())
            {
                ans=min(ans,abs(goal-(x+*itr)));
                if(ans==0)
                {
                    return 0;
                }
              
            }
            if(itr!=s.begin())
            {
                auto itr2=itr;
                itr2--;
                if(itr2!=s.end())
                {
                     ans=min(ans,abs(goal-(x+*itr2)));
                }
            }
        }
        return ans;
    }
};