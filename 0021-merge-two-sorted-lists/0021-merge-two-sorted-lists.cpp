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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        if(list1->val>list2->val) swap(list1,list2);
         ListNode *h=list1;
        ListNode *temp=list2;
        while(list1->next )
        {//cout<<"ik";
            if(list1->next->val>temp->val)
            {
                //temp=list1->next;
                //cout<<"ok";
                ListNode *u=list1->next;
                list1->next=temp;
                temp=u;
                
            }
            else
            {//cout<<"ok";
                list1=list1->next;
            }
        }
        while(temp)
        {//cout<<temp->val;
            list1->next=temp;
             list1=list1->next;
            temp=temp->next;
        }
       
        list1->next=NULL;
        return h;
    }
};