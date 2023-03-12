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
    void reorderList(ListNode* head) {
        if(!head->next) return;
        ListNode *fst=head;
        ListNode *slw=head;
        stack<ListNode *> st;
        while(fst && fst->next)
        {
            st.push(slw);
            slw=slw->next;
            fst=fst->next->next;
            
        }
        if(!fst)
        {
         ListNode *end=NULL;
           // st.pop();
            stack<ListNode*>st2;
            while(!st.empty())
            {
                ListNode *y=st.top();
                st2.push(st.top());
                st.pop();
                y->next=slw;
                slw=slw->next;
                
                
            }
            ListNode *prev=st2.top();
            st2.pop();
            while(!st2.empty())
            {
                ListNode *y=st2.top();
                st2.pop();
                prev->next->next=y;
                prev=y;
            }
            prev->next->next=end;
        }
        else if(!fst->next)
        {
            ListNode *end=slw;
            // slw=slw->next;
            slw=slw->next;
            // st.pop();
            // cout<<slw->val<<" "<<st.top()->val<<endl;
            stack<ListNode*>st2;
            while(!st.empty())
            {
                ListNode *y=st.top();
                st2.push(st.top());
                st.pop();
                y->next=slw;
                slw=slw->next;
                
                
            }
            ListNode *prev=st2.top();
            st2.pop();
            while(!st2.empty())
            {
                ListNode *y=st2.top();
                st2.pop();
                prev->next->next=y;
                prev=y;
            }
            prev->next->next=end;
            end->next=NULL;
        }
    }
};