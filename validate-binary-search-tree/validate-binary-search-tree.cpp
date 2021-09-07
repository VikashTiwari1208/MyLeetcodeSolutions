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
    void helper1(TreeNode*root,int &mx)
    {
        if(root==NULL)
            return;
        if(root->val>mx)
            mx=root->val;
        helper1(root->left,mx);
        helper1(root->right,mx);
    }
    int maxNode(TreeNode*root)
    {
        int mx=INT_MIN;
        helper1(root,mx);
        return mx;
    }
    void helper2(TreeNode*root,int &mn)
    {
        if(root==NULL)
            return;
        if(root->val<mn)
            mn=root->val;
        helper2(root->left,mn);
        helper2(root->right,mn);
    }
    int minNode(TreeNode*root)
    {
        int mn=INT_MAX;
        helper2(root,mn);
        return mn;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        if(root->left==NULL and root->right==NULL)
            return true;
        if(root->left==NULL)
        {
            if(root->val<minNode(root->right))
            {
                if(isValidBST(root->right))
                    return true;
                return false;
            }
            return false;
        }
        if(root->right==NULL)
        {
            if(root->val>maxNode(root->left))
            {
                if(isValidBST(root->left))
                    return true;
                return false;
            }
            return false;
        }
        if(maxNode(root->left) < root->val && minNode(root->right)>root->val)
        {
            return (isValidBST(root->left) && isValidBST(root->right));
        }
        return false;
    }
};