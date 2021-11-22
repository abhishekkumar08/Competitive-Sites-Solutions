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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head, *fast=head;
        if(head->next==NULL)
            return NULL;
        int i=1;
        while(i<=n)
        {
            fast=fast->next;
            i++;
        }
        if(fast==NULL)
            return head->next;
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
            
        slow->next=slow->next->next;
        return head;
    }
};

// https://takeuforward.org/data-structure/remove-n-th-node-from-the-end-of-a-linked-list/