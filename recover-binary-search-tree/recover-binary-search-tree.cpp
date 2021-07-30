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
    TreeNode* first=NULL;
    TreeNode* second=NULL;
    TreeNode* prev=new TreeNode(INT_MIN);
    void helper(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        helper(root->left);
        if(first==NULL&&prev->val>root->val)
        {
            first=prev;
        }
        if(first&&prev->val>root->val)
        {
            second=root;
        }
        prev=root;
        
        helper(root->right);
    }
    void recoverTree(TreeNode* root) {
        helper(root);
        cout<<first->val<<" "<<second->val;
        swap(first->val,second->val);
    }
};