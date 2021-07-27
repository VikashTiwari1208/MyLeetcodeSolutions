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
    int helper(TreeNode* root,int &ans)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=helper(root->left,ans);
        int right=helper(root->right,ans);
        if(root->left&&root->left->val!=root->val)
        {
            left=0;
        }
         if(root->right&&root->right->val!=root->val)
        {
            right=0;
        }        
        ans=max(ans,left+right);
        
        return max(left,right)+1;
    }
    int longestUnivaluePath(TreeNode* root) {
        int ans=0;
        helper(root,ans);
        return ans;
    }
};