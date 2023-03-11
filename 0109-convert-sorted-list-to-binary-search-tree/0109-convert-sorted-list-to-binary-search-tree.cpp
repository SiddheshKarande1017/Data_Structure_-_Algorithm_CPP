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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *ans=NULL;
    TreeNode *r=ans;
    void insert(int x){
        if(ans==NULL){
            ans=new TreeNode(x);
            r=ans;
            return ;
        }
        ans=r;
        while(true){
            if(ans->val<x){
                if(ans->right==NULL){
                    ans->right=new TreeNode(x);
                    return ;
                }
                ans=ans->right;
            }
            else{
                if(ans->left==NULL){
                    ans->left=new TreeNode(x);
                    return ;
                } 
                ans=ans->left;
            }
        }
        
    }
    void rec(int start,int end,vector<int> &v){
        if(start>end) return ;
        int mid=(start+end)/2;
        insert(v[mid]);
        rec(start,mid-1,v);
        rec(mid+1,end,v);
        
        
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        if(v.size()==0) return NULL;
        rec(0,v.size()-1,v);
        return r;
    }
};