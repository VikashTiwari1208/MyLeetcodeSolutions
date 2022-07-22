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
    bool helper(TreeNode* &root)
    {
        if(root==NULL)
        {
            return false;
        }
        bool l=helper(root->left);
        bool r=helper(root->right);
        if(root->val!=1&&l==false&&r==false)
        {
            root=NULL;
            return false;
        }
        return true;
    }
    TreeNode* pruneTree(TreeNode* root) {
        helper(root);
        return root;
    }
};