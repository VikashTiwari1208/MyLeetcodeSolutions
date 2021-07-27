class Solution {
public:
    int minDeletions(string s) {
       
        int frq[26]={0};
        for(auto x:s)
        {
            frq[x-'a']++;
        }
        int ans=0;
        unordered_set<int>st;
        for(int i=0;i<26;i++)
        {
            while(st.find(frq[i])!=st.end())
            {
              ans++;
                frq[i]--;
            }
            if(frq[i]>0)
            {
                st.insert(frq[i]);
            }
        }
        return ans;
    }
};