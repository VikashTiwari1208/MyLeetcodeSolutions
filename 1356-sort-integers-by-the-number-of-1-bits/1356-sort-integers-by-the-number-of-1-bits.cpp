class Solution {
public:
    int cnt(int x)
    {
        int ans=0;
        while(x>0)
        {
            int val=x%2;
            if(val==1)
            {
                ans++;
            }
            x=x/2;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        for(auto x:arr)
        {
            v.push_back({cnt(x),x});
        }
        vector<int>ans;
        sort(v.begin(),v.end());
        for(auto x:v)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};