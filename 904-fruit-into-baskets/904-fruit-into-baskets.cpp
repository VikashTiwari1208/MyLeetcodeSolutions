class Solution {
public:
    int totalFruit(vector<int>& v) {
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        int n=v.size();
        int ans=0;
        while(i<n)
        {
            mp[v[i]]++;
            while(mp.size()>2&&j<n)
            {
                mp[v[j]]--;
                if(mp[v[j]]==0)
                {
                    mp.erase(v[j]);
                }
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};