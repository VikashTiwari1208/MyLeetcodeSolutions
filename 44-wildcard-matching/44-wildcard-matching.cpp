class Solution {
public:
    bool isMatch(string s, string p) {
        
        int n=s.length();
        int m=p.length();
        
        int star=-1;
       int i=0,j=0;
        int last_match;
        while(i<n)
        {
            if(j<m&&s[i]==p[j]||p[j]=='?')
            {
                //star=-1;
                i++;
                j++;
            }
            else if(j<m&&p[j]=='*')
            {
                star=j;
                j++;
               last_match=i;
               
            }
            else if(star!=-1&&s[i]!=p[j])
            {
                j=star+1;
               i=++last_match;
            }
            else
            {
             return false;   
            }
        }
        while(j<m&&p[j]=='*')
        {
            j++;
        }
        return j==m;
    }
};