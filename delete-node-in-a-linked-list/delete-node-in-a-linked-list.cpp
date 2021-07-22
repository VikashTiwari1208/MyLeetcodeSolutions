/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr=node;
        while(curr->next)
        {
            ListNode *temp=curr->next;
            swap(curr->val,temp->val);
            if(curr->next->next==NULL)
            {
                curr->next=NULL;
                break;
            }
             curr=curr->next;
        }
    }
};