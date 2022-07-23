class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int sum=0;
        for(auto &x:nums)
        {
            sum+=x;
        }
        int n=nums.size();
        int nn=n/2;
        vector<vector<int>>first(nn+1),second(nn+1);
        for(int i=0;i<(1<<nn);i++)
        {
            int sz=0;
            int sum1=0;
            int sum2=0;
            for(int j=0;j<nn;j++)
            {
                if(i&(1<<j))
                {
                    sz++;
                    sum1+=nums[j];
                    sum2+=nums[j+nn];
                }
            }
            first[sz].push_back(sum1);
            second[sz].push_back(sum2);
        }
        for(int sz=1;sz<nn;sz++)
        {
            sort(second[sz].begin(),second[sz].end());
        }
        int ans=abs(sum-2*first[nn][0]);
        for(int k=1;k<=nn-1;k++)
        {
            for(auto &a:first[k])
            {
               int target=(sum-2*(a))/2;
               auto itr=lower_bound(second[nn-k].begin(),second[nn-k].end(),target);
                if(itr!=second[nn-k].end())
                {
                    ans=min(ans,abs(sum-2*(a+(*itr))));
                }
                if(itr!=second[nn-k].begin())
                {
                    itr--;
                    ans=min(ans,abs(sum-2*(a+(*itr))));
                }
            }
        }
return ans;        
    }
};