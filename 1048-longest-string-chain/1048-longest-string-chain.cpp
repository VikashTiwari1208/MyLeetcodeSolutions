 static bool comp(string &a,string &b)
  {
    if(a.length()<b.length())
    {
      return true;
    }
    else
    {
      return false;
    }
  }   
class Solution {
public:
 
   bool fun(string x,string y)
    {
        if(y.size()-x.size()!=1)
            return false;
        int diff=0;
            int i=0;
            int j=0;
            int count=0;
            for(;j<y.size();j++)
            {
                if(x[i]!=y[j])
                {
                    if(count==0)
                        count++;
                    else
                        return false;
                }
                else
                    i++;
            }
            return true;
      
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
      sort(words.begin(), words.end(),comp);
      vector<int>dp(n,1);
      for(int i=0;i<n;i++)
      {
        for(int j=i+1;j<n;j++)
        {
          if(fun(words[i],words[j]))
          {
            dp[j]=max(dp[j],dp[i]+1);
          }
        }
      }
      return *max_element(dp.begin(),dp.end());
    }
};