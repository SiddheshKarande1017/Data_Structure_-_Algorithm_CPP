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
    ListNode* swapNodes(ListNode* head, int k) {
     ListNode* a;
     ListNode* b;
     int p=k;
     ListNode* temp=head;
        int l=0;
     while(temp)
     {
         
         if(p==1)a=temp;
         l++;
         temp=temp->next;
         p--;
     }
      p=l-k+1;
      temp=head; 
     while(temp)
     {
         
         if(p==1) b=temp;
         l++;
         temp=temp->next;
         p--;
     }
        int yy=a->val;
        a->val=b->val;
        b->val=yy;
        return head;
    }
};