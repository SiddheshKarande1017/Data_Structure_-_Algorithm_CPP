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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
       
        ListNode* temp=head;
        while( temp && temp->next )
        {
             int a1=temp->val;
              int a2=temp->next->val;
            temp->val=a2;
            temp->next->val=a1;
            temp=temp->next->next;
        }
        return head;
    }
};