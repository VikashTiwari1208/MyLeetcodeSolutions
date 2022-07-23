class Solution {
public:
    int helper(vector<int>&v,vector<int>&slots,int idx,map<vector<int>,int>&mp)
{
    int n=v.size();
    if(idx==n)
    {
        return 0;
    }
    if(mp.find(slots)!=mp.end())
    {
        return mp[slots];
    }
    int sz=slots.size();
    int sum=0;
    for(int i=1;i<sz;i++)
    {
        if(slots[i]<2)
        {
           slots[i]++;
           sum=max((v[idx]&i)+helper(v,slots,idx+1,mp),sum);
           slots[i]--;
        }
    }
    return mp[slots]=sum;
}
    int maximumANDSum(vector<int>& v, int k) {
        map<vector<int>,int>mp;
        vector<int>slots(k+1,0);
         return helper(v,slots,0,mp);
    }
};