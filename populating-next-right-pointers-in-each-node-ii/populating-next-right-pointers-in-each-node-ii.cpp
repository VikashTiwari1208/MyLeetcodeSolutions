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
        if(root==NULL)
        {
            return  nullptr;
        }
        Node *head=root;
       
        while(head)
        {
         Node * curr=head;
            Node* prev=NULL;
            head=NULL;
            while(curr)
            {
                if(curr->left)
              { 
                 if(prev==NULL)
                 {
                    head=curr->left;
                    prev=curr->left;
                 }
                 else
                 {
                    prev->next=curr->left;
                     prev=prev->next;
                 }
              }
              if(curr->right)
              {
                if(prev==NULL)
                {
                  head=curr->right;
                    prev=curr->right;
                }
                 else
                 {
                    prev->next=curr->right;
                     prev=prev->next;
                 }
               }
             curr=curr->next;  
           }
        }
        return root;
    }
};