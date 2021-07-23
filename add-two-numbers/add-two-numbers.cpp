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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head= new ListNode();
        ListNode *curr1=l1;
        ListNode* curr2=l2;
        int carry=0;
        ListNode *temp =new ListNode();
        head->next=temp;
        while(curr1&&curr2)
        {
            int sum=curr1->val+curr2->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode *temp2=new ListNode(sum);
            temp->next=temp2;
            temp=temp->next;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        while(curr1)
        {
            int sum=curr1->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode *temp2=new ListNode(sum);
            temp->next=temp2;
            temp=temp->next;
            curr1=curr1->next;
        }
        while(curr2)
        {
            int sum=curr2->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode *temp2=new ListNode(sum);
            temp->next=temp2;
            temp=temp->next;
            curr2=curr2->next;
        }
        if(carry)
        {
            ListNode *temp2=new ListNode (carry);
            temp->next=temp2;
            temp=temp->next;
        }
        return head->next->next;
    }
};