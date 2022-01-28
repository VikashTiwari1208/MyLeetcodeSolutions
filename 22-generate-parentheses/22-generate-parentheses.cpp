class Solution {
public:
    vector<string>ans;
    void helper(int left,int right,int n,string s)
    {
        if(left==n&&right==n)
        {
        ans.push_back(s);
            return ;
        }
        if(left<n)
        {
            helper(left+1,right,n,s+"(");
        }
        if(right<left)
        {
            helper(left,right+1,n,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        helper(0,0,n,s);
        return ans;
    }
};