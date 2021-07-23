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
    void helper(TreeNode* root,string &ans)
    {
        if(root==NULL||root->left==NULL&&root->right==NULL)
        {
            return ;
        }
        if(root->left==NULL&&root->right)
        {
            ans+="()";
           // helper(root->right,ans);
        }
        if(root->left)
        {
            ans+="(";
            ans+=to_string(root->left->val);
            helper(root->left,ans);
            ans+=")";
        }
         if(root->right)
        {
            ans+="(";
            ans+=to_string(root->right->val);
            helper(root->right,ans);
            ans+=")";
        }
    }
    string tree2str(TreeNode* root) {
       string ans="";
        ans+=to_string(root->val);
        helper(root,ans);
        return ans;
    }
};