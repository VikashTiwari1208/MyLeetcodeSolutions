class Solution {
public:
    unordered_set<string>st;
    void helper(string& s, string curr,vector<int>&vis)
    {
       
        if(curr.length()>s.length())
        {
            return ;
        }
         st.insert(curr);
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                string temp=curr;
                temp+=s[i];
                vis[i]=1;
                helper(s,temp,vis);
                vis[i]=-1;
                //curr.pop_back();
            }   
        }
    }
    int numTilePossibilities(string tiles) {
        vector<int>vis(tiles.size(),-1);
        helper(tiles,"",vis);
        return st.size()-1;
    }
};