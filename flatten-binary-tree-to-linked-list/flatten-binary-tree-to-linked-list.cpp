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
    void flatten(TreeNode* root) {
      if(root==NULL||(root->right==NULL&&root->left==NULL))
         {
             return ;
         }
         TreeNode *curr=root;
         while(curr)
         {
             if(curr->left)
             {
                 TreeNode* temp=curr->left;
                 TreeNode *right=temp;
                 while(right->right)
                 {
                     right=right->right;
                 }
                 right->right=curr->right;
                 curr->right=temp;
                 curr->left=NULL;
             }
             curr=curr->right;
         }
         
            
    }
};