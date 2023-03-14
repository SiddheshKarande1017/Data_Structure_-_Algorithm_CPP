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
    int ans=0;
    void rec(TreeNode* root, string y)
    {
        if(!root) return ;
        if(!root->left && !root->right) 
        {
            y+=to_string(root->val);
            ans+=stoi(y);
            // cout<<y<<endl;
            return;
        }
        rec(root->left,y+to_string(root->val));
        rec(root->right, y+to_string(root->val));
    }
    int sumNumbers(TreeNode* root) {
        rec(root,"");
        return ans;
    }
};