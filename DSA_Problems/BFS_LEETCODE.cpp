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
 Runtime: 0 ms, faster than 100.00% of C++ online submissions for Same Tree.
Memory Usage: 9.9 MB, less than 78.98% of C++ online submissions for Same Tree.
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        else if((!p && q) || (p && !q)) return false;
        if(p->val!=q->val)return false;
        
       queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(p);
        q2.push(q);
        
        while(!q1.empty() || !q2.empty()){
            TreeNode* k=q1.front();
            TreeNode* l=q2.front();
            q1.pop();
            q2.pop();
            if(k->val!=l->val)return false;
            if(k->left && l->left){q1.push(k->left);q2.push(l->left);}
            else if((k->left && !l->left) || (!k->left && l->left))  return false;
            if(k->right && l->right){q1.push(k->right);q2.push(l->right);}
            else if((k->right && !l->right) || (!k->right && l->right)) return false;
        }
        return true;
    }
};