class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
          for(auto x:num)
          {
            while(ans.length()&&(ans.back()>x)&&k)
            {
              ans.pop_back();
              k--;
            }
            if(ans.size()||x!='0')
            {
              ans+=x;
            }
          }
      while(ans.size()&&k)
      {
        ans.pop_back();
        k--;
      }
      if(ans.size()==0)
      {
        return "0";
      }
      else
      {
        return ans;
      }
    }
};