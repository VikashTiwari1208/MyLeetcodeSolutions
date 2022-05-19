/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* prev=NULL;
        ListNode* temp;
        while(curr)
        {
          temp=curr;
            curr=curr->next;
            temp->next=prev;
            prev=temp;
        }
        return temp;
    }
};