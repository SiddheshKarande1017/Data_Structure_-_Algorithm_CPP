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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *temp=head;
        ListNode *prev=head;
         ListNode *end=head;
        while(temp)
        {
            end=temp;
            ListNode *n=temp->next;
            ListNode *temp2=temp;
            ListNode *d=head;
            ListNode *l=head;
            if(prev->val<=temp2->val)
            {
                prev=temp2;
                temp=n;
                continue;
            }
            bool k=false;
            while(l->val<temp2->val)
            {
                d=l;
                k=true;
                l=l->next;
            }
            //cout<<temp2->val<<" "<<d->val<<endl;
            if(!k)
            {
                temp=n;
                prev->next=n;
                temp2->next=head;
                head=temp2;
            }
            else
            {
                temp=n;
                prev->next=n;
                temp2->next=d->next;
                d->next=temp2;
                
            }
            
        
           
        }
//          ListNode *d=head;
//         bool k=false;
//             while(d->val<end->val)
//             {
//                 k=true;
//                 d=d->next;
//             }
//         if(!k)
//             {
            
//                 //temp=n;
//                // prev->next=n;
//                 prev->next=NULL;
//                 end->next=head;
//                 head=end;
//             }
//         else
//         {
//             cout<<"ok"<<endl;cout<<d->val<<endl;
//             prev->next=NULL;
//             end->next=d->next;
//             d->next=end;
//         }
        return head;
    }
};