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
     struct compare {
        bool operator()(const ListNode* l, const ListNode* r) {
            return l->val > r->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head=new ListNode(-1);
        priority_queue<ListNode*,vector<ListNode*>,compare>pq;
        int n=lists.size();
        if(n==0)
        {
            return  NULL;
        }
        for(int i=0;i<n;i++)
        {
           if(lists[i])
           {
                pq.push(lists[i]);
           }
        }
        ListNode* temp=head;
        while(pq.size())
        {
            ListNode* curr=pq.top();
            pq.pop();
            temp->next=curr;
            temp=temp->next;
            if(curr&&curr->next)
            {
                pq.push(curr->next);
            }
        }
        return head->next;
    }
};