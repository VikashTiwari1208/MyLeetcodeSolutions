class Solution {
public:
    string pushDominoes(string s) {
        int n=s.length();
        int right[n];
        int left[n];
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        string ans="";
        int cnt=1;
        char prev;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                cnt=1;
                prev='R';
                continue;
            }
            else if(s[i]=='L')
            {
                cnt=0;
                prev='L';
            }
            if(s[i]=='.'&&prev=='R')
            {
                right[i]=cnt;
                cnt++;
            }
        }
        prev='.';
        cnt=1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='L')
            {
                cnt=1;
                prev='L';
                continue;
            }
            else if(s[i]=='R')
            {
                cnt=0;
                prev='R';
            }
            if(s[i]=='.'&&prev=='L')
            {
                left[i]=cnt;
                cnt++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(right[i]==0&&left[i]==0)
            {
                ans+=s[i];
            }
            else if(right[i]==left[i])
            {
                ans+='.';
            }
            else if(right[i]&&left[i]==0)
            {
                ans+='R';
            }
            else if(right[i]==0&&left[i])
            {
                ans+='L';
            }
            else
            {
                ans+=(right[i]<left[i])?('R'):('L');
            }
        }
        return ans;
    }
};