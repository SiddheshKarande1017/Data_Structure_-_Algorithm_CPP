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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
       
        ListNode* prev=head;
        ListNode * fst=head;
        ListNode *slw=head;
        while(fst && fst->next)
        {
            prev=slw;
            slw=slw->next;
            fst=fst->next->next;
        }
        prev->next=slw->next;
        return head;
    }
};