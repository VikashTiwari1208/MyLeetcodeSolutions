class Solution {
public:
    int count(string &s)
    {
        int a=1,b=1,c=1;
        for(auto x:s)
        {
            if(x>='1'&&x<='9')
            {
                a=0;
            }
            if(x>='a'&&x<='z')
            {
                b=0;
            }
            if(x>='A'&&x<='Z')
            {
                c=0;
            }
        }
        return a+b+c;
    }
    int strongPasswordChecker(string s) {
        int n=s.length();
        int insert=count(s);
        cout<<insert<<endl;
        if(n<6)
        {
            return max(insert,6-n);
        }
        int rep=0;
        for(int i=0;i<n;i++)
        {
            int j=i;
            
            while(j<n&&s[j]==s[i])
            {
                j++;
            }
            int len=j-i;
           // cout<<i<<" "<<j<<" "<<len<<endl;
            rep+=len/3;
            i=j-1;
        }
        if(n<=20)
        {
          //  cout<<rep<<" "<<insert<<endl;
            return max(rep,insert);
        }
        int del=n-20;
        int one=0;
        int two=0;
        for(int i=0;i<n;i++)
        {
            int j=i;
            
            while(j<n&&s[j]==s[i])
            {
                j++;
            }
            int len=j-i;
           // rep+=len/3;
            i=j-1;
            if(len%3==0)
            {
                one++;
            }
            if(len>=3&&len%3==1)
            {
                two+=2;
            }
            
        }
        rep-=min(del,one);
        rep-=min(max(del-one,0),two)/2;
        rep-=max(del-one-two,0)/3;
        return del+max(insert,rep);
    }
};