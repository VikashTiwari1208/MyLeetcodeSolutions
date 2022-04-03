class Solution {
public:
    vector<string>ans;
    void helper(string s,int sidx,vector<string>&parts)
    {
        int n=s.length();
        if(parts.size()==4&&sidx==n)
        {
            for(auto x:parts)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            string res="";
            res+=parts[0];
            res+=".";
            res+=parts[1];
            res+=".";
            res+=parts[2];
            res+=".";
            res+=parts[3];
            ans.push_back(res);
            return;
        }
        if(parts.size()>=4||sidx>=n)
        {
            return ;
        }
        
        for(int i=0;i<3&&(i+sidx<n);i++)
        {
            string num=s.substr(sidx,i+1);
         //   cout<<num<<" "<<endl;
            int val=stoi(num);
          //  cout<<val<<endl;
            if(val>255||(val==0&&num.length()>=2)||(s[sidx]=='0'&&i>=1))
            {
                break;
            }
            parts.push_back(num);
            helper(s,sidx+i+1,parts);
            parts.pop_back();
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string>v;
        helper(s,0,v);
        return ans;
    }
};