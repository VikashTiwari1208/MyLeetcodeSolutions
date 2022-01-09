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
    vector<TreeNode*>helper(int start,int end)
    {
        vector<TreeNode*>res;
        if(start>end)
        {
            res.push_back(NULL);
            return res;
        }
        if(start==end)
        {
            TreeNode* node=new TreeNode(start);
            res.push_back(node);
            return res;
        }
        for(int i=start;i<=end;i++)
        {
            vector<TreeNode*> left=helper(start,i-1);
            vector<TreeNode*>right=helper(i+1,end);
            for(int j=0;j<left.size();j++)
            {
                for(int k=0;k<right.size();k++)
                {
                    TreeNode* temproot=new TreeNode(i);
                    temproot->left=left[j];
                    temproot->right=right[k];
                    res.push_back(temproot);
                }
            }
        }
        return res;
    }
    vector<TreeNode*> generateTrees(int n) {
        return helper(1,n);
        
    }
};