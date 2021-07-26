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
public: int ans=0;
       // int sum=0;
    void helper(TreeNode* root,int sum,int &ans)
    {
        if(!root)
            return; 
            sum-=root->val;
            if(sum==0)
            {
                cout<<root->val<<endl;
                ans++;
            }//cout<<ans;}
        
        if(root->left){helper(root->left,sum,ans);}
         if(root->right){helper(root->right,sum,ans);}        
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        {
            return 0;
        }
        int sum=targetSum;
        helper(root,sum,ans);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
      
        return ans;
    }
};