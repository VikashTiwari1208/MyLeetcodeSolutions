class Solution {
public:
    int minDeletions(string s) {
        vector<int> cnt(26,0);
        for(auto x:s)
        {
            cnt[x-'a']++;
        }
        sort(cnt.begin(),cnt.end(),greater<int>());
        unordered_set<int>st;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            int frq=cnt[i];
            while(st.find(frq)!=st.end())
            {
                ans++;
                frq--;
            }
            if(frq!=0)
            {
                st.insert(frq);
            }
        }
        return ans;
    }
};