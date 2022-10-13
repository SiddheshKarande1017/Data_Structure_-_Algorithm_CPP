/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode *temp=node;ListNode *prev;
        while(temp->next)
        {
            prev=temp;
            temp->val=temp->next->val;
            
            temp=temp->next;
            if(temp->next==NULL){ prev->next=NULL;break;}
        }
        
    }
};