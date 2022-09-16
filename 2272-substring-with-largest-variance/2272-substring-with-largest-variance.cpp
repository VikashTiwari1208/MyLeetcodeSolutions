class Solution {
public:
    int helper(char a,char b,string &s)
    {
        int n=s.length();
            int l=0;
            int r=0;
            int ans=0;
            bool flag=false;
            for(auto x:s)
            {
                if(x==a)
                {
                    l++;
                }
                if(x==b)
                {
                    r++;
                }
                if(l>0)
                {
                    ans=max(ans,r-l);
                }
                else
                {
                  if(flag)
                  {
                      ans=max(ans,r-1);
                  }
                }
                if(l>r)
                {
                    flag=true;
                    l=0;
                    r=0;
                }
            }
            return ans;
        
        
    }
    int largestVariance(string s) {
        int ans=0;
        for(char c='a';c<='z';c++)
        {
            for(char c2='a';c2<='z';c2++)
            {
                if(c!=c2)
                {
                    int val=helper(c,c2,s);
                    if(ans<val)
                    {
                     //   cout<<c<<" "<<c2<<" "<<val<<endl;
                        ans=val;
                    }
                    //ans=max(ans,val);
                }
            }
        }
        return ans;
    }
};