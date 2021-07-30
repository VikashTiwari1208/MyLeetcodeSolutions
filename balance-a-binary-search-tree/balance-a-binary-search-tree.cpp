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
    void inorder(TreeNode *root,vector<int>&sortedList)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,sortedList);
        sortedList.push_back(root->val);
        inorder(root->right,sortedList);
    }
    TreeNode* helper(vector<int>arr,int l,int r)
    {
        if(l>r)
        {
            return NULL;
        }
        int mid=l+(r-l)/2;
        TreeNode *nroot=new TreeNode(arr[mid]);
        nroot->left=helper(arr,l,mid-1);
        nroot->right=helper(arr,mid+1,r);
        return nroot;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>arr;
        TreeNode *root2=root;
        inorder(root2,arr);
        TreeNode* head=helper(arr,0,(int)arr.size()-1);
        return head;
    }
};