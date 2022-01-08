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
    vector<int> postorderTraversal(TreeNode* root) {
     vector<int> v;
        if(!root)return v;
        stack<TreeNode*> st;
        TreeNode* node=root;
        while(node || !st.empty()){
            while(node){
                st.push(node);
                node=node->left;
            }
            auto t=st.top()->right;
            if(t)node=t;
            else{
                auto t=st.top();
                st.pop();
                v.push_back(t->val);
                while(!st.empty() and t==st.top()->right){
                    t=st.top();
                    st.pop();
                    v.push_back(t->val);
                }
            }
        }
       return v;
    }
};