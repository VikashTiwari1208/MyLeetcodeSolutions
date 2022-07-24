class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int,int>cnt;
        for(auto x:nums)
        {
            cnt[x]++;
        }
        int ans=0;
        int next=-1;
        for(auto x:cnt)
        {
            int sz=x.second;
            if(next==-1)
            {
                ans+=((sz)*(sz-1))/2;
                next=x.first+sz;
            }
            else{
                ans+=sz*max(next-x.first,0);
                ans+=((sz)*(sz-1))/2;
                next=max(next,x.first)+sz;
            }
        }
        return ans;
    }
};