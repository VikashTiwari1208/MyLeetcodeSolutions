class Solution {
public:
    long long kSum(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<long long int ,int>>pq;
              long long int res;
        long long int sum=0;
        for(auto &x:nums)
        {
            if(x>0)
            {
                sum+=x;
            }
            if(x<0)
            {
                x=-x;
            }
        }
        sort(nums.begin(),nums.end());
        res=sum;
        pq.push({sum-nums[0],0});
        while(k>1)
        {
            auto x=pq.top();
            res=x.first;
            pq.pop();
            int idx=x.second;
            if(idx+1<n)
            {
             long long int op1=x.first-nums[idx+1];
             long long  int op2=x.first+nums[idx]-nums[idx+1];
              pq.push({op1,idx+1});
                pq.push({op2,idx+1});
            }
            k--;
        }
        return res;
    }
};