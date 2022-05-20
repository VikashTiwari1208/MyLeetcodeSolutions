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
    ListNode * reverse(ListNode* start,ListNode* end)
    {
       // cout<<start->val<<" "<<end->val<<endl;
        ListNode* curr=start;
        ListNode* temp;
        ListNode* prev=NULL;
        while(curr!=end)
        {
          temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        //cout<<prev->val<<endl;
        return prev;
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
       //  cout<<head->val<<" ";
       for(int i=0;i<k;i++)
        {
            if(temp==NULL)
            {
               // cout<<"here"<<endl;
                return head;
            }
            temp=temp->next;
           // k--;
        }
      //  cout<<temp->val<<endl;
        //cout<<"after reverseing "<<endl;
        ListNode* nhead=reverse(head,temp);
        head->next=reverseKGroup(temp,k);
        return nhead;
    }
};