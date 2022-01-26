/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,vector<TreeNode*>>dp;
    vector<TreeNode*> helper(int n)
    {
        if(n%2==0)
        {
            return {};
        }
        if(n==1)
        {
            vector<TreeNode*>temp;
            TreeNode*  node=new TreeNode();
            temp.push_back(node);
            return temp;
        }
        if(dp.find(n)!=dp.end())
        {
            return dp[n];
        }
        vector<TreeNode* >ans;
        for(int i=1;i<n;i+=2)
        {
            vector<TreeNode*>left=helper(i);
            vector<TreeNode*>right=helper(n-i-1);
            cout<<i<<" "<<n-i-1<<" "<<left.size()<<" "<<right.size()<<endl;
            for(auto x:left)
            {
                for(auto y:right)
                {
                    TreeNode* root = new TreeNode();
                    root->left=x;
                    root->right=y;
                    ans.push_back(root);
                }
            }
        }
        return dp[n]=ans;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        return helper(n);
    }
};