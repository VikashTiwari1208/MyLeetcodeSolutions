/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };N
 */
class Solution {
public:
    string helper(TreeNode *root,unordered_map<string,int>&mp,vector<TreeNode*>&ans)
    {
        if(root==NULL)
        {
            return "$";
        }
        string temp=to_string(root->val)+',';
        temp+=helper(root->left,mp,ans);
        temp+=helper(root->right,mp,ans);
        cout<<root->val<<" "<<temp<<endl;
        if(mp[temp]==1)
        {
            ans.push_back(root);
        }
        mp[temp]++;
        return temp;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
      unordered_map<string,int>mp;
        vector<TreeNode*>ans;
        helper(root,mp,ans);
        return ans;
    }
};