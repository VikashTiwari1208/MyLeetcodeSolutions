class Solution {
    bool check(string &a,string &b)
    {
        int diff=0;
        int n=a.length();
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                continue;
            }
            else
            {
                diff++;
            }
        }
        return diff==1;
    }
public:
    int countSubstrings(string s, string t) {
        int n=s.length();
        int m=t.length();
        unordered_map<int,vector<string>>mp;
        for(int i=0;i<n;i++)
        {
            string temp="";
            temp+=s[i];
            mp[temp.length()].push_back(temp);
            for(int j=i+1;j<n;j++)
            {
                temp+=s[j];
                mp[temp.length()].push_back(temp);
            }
        }
      unordered_map<int,vector<string>>mp2;
        for(int i=0;i<m;i++)
        {
            string temp="";
            temp+=t[i];
            mp2[temp.length()].push_back(temp);
            for(int j=i+1;j<m;j++)
            {
                temp+=t[j];
                mp2[temp.length()].push_back(temp);
            }
        }
        int ans=0;
        for(int i=1;i<=min(n,m);i++)
        {
          vector<string>v1=mp[i];
            vector<string>v2=mp2[i];
            for(auto x:v1)
            {
                for(auto y:v2)
                {
                    if(check(x,y))
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
        
    }
};