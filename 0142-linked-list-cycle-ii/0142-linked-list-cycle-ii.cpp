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
     ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>st;
        while(head != NULL){
            if(st.find(head) == st.end()){
                st.insert(head);
                head = head-> next;
            }
            else{
                return head;
            }
        }
        return NULL;
    }
};