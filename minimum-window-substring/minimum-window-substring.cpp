class Solution {
public:
    string minWindow(string s, string t) {
      unordered_map<char,int>mp;
        for(auto x:t)
        {
            mp[x]++;
        }
        int len=INT_MAX;
        int start_idx;
        int total_char=t.size();
        int i=0;int j=0;
        int n=s.size();
        while(i<n)
        {
            if(mp[s[i]]>0)
            {
                total_char--;
            }
            mp[s[i]]--;
           while(total_char==0)
           {
               // shrink the window
               if(len>i-j+1)
               {
                   start_idx=j;
               }
               len=min(i-j+1,len);
               
               mp[s[j]]++;
               if(mp[s[j]]>0)
               {
                   total_char++;
               }
               j++;
           }
            i++;
        }
        if(len==INT_MAX)
        {
            return "";
        }
        return s.substr(start_idx,len);
    }
};