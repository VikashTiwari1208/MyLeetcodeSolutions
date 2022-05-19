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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
      if(head==NULL||head->next==NULL||l==r)
      {
          return head;
      }
        ListNode * curr=head;
        ListNode* prev=NULL;
        while(l>1)
        {
            prev=curr;
            curr=curr->next;
            l--;
            r--;
        }
        ListNode* start=curr;
       ListNode* starttail=prev;
        
        ListNode *temp=NULL;
        while(r--)
        {
             temp=curr->next;
             curr->next=prev;
             prev=curr;
            curr=temp;
           // r--;
        }
        if(starttail!=NULL)
        {
            starttail->next=prev;
        }
        else
        {
            head=prev;
        }
        start->next=curr;
        return head;
    }
};