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
    ListNode* reversell(ListNode* start,ListNode* end)
    {
        ListNode *curr=start;
        ListNode *prev=NULL;
        ListNode* temp=NULL;
        while(curr!=end)
        {
            temp=curr;
            curr=curr->next;
            temp->next=prev;
            prev=temp;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy_head=head;
        for(int i=0;i<k;i++)
        {
            if(dummy_head==nullptr)
            {
                return head;
            }
            dummy_head=dummy_head->next;
        }
        ListNode* newhead=reversell(head,dummy_head);
        head->next=reverseKGroup(dummy_head,k);
        return newhead;
    }
};