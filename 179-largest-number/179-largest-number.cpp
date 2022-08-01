class Solution {
public:
    static bool comp(string &a,string &b)
    {
        string temp1=a+b;
        string temp2=b+a;
        if(temp1>temp2)
        {
            return true;
        }
        return false;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        string ans="";
        int zer=0;
        for(auto x:nums)
        {
            if(x==0)
            {
                zer++;
            }
            string s=to_string(x);
            v.push_back(s);
        }
        if(zer==nums.size())
        {
            return "0";
        }
        sort(v.begin(),v.end(),comp);
        for(auto x:v)
        {
            ans+=x;
        }
        return ans;
    }
};