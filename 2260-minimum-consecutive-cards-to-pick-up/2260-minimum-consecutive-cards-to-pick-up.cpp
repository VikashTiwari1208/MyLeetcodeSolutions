class Solution {
public:
    int minimumCardPickup(vector<int>& card) {
        int n=card.size();
        int ans=n+1;
        int i=0;
        int j=0;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[card[i]].push_back(i);
        }
        for(auto x:mp)
        {
            if(x.second.size()>=2)
            {
                int sz=x.second.size();
                for(int i=1;i<sz;i++)
                {
                 ans=min(ans,x.second[i]-x.second[i-1]+1);   
                }
            }
        }
        if(ans==n+1)
        {
            return -1;
        }
        return ans;
    }
};