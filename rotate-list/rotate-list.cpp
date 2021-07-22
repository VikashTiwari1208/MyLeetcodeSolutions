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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||k==0)
        {
            return head;
        }
        ListNode* curr=head;
         int len=0;
        while(curr)
        {
            len++;
            curr=curr->next;
        }
        
        curr=head;
        ListNode *head2=NULL;
        k=k%len;
        int diff=len-k;
        while(diff>=1)
        {
            if(diff==1)
            {
                head2=curr->next;
                curr->next=NULL;
                diff--;
                 continue;
            }
            curr=curr->next;
            diff--;
        }
        ListNode* curr2=head2;
        while(curr2&&curr2->next)
        {
            curr2=curr2->next;
        }
        if(curr2)
        {
            curr2->next=head;
        }
        if(head2)
        {
            return head2;
        }
        return head;
    }
};