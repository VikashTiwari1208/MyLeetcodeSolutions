/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
    if(root ==NULL)return root;
    Node *prev,curr;
    
    queue<Node*>q; //
    q.push(root);
    while(q.size()!=0){
        int n = q.size();
        for(int i=0;i<n;i++){
           auto  curr = q.front();
            q.pop();
            if(i!=0)
                prev->next = curr;//connection

            prev = curr;
            if(prev->left) q.push(prev->left);
            if(prev->right) q.push(prev->right);
        }
        prev->next = nullptr;
    }
        return root;
    }
};