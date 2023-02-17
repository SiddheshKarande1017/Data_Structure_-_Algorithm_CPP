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
    vector<int> vec;
    void ans(TreeNode *r)
    {
        if(!r) return ;
        // mini=min(mini,abs(r->val-r2->val));
        ans(r->left);
        vec.push_back(r->val);
        ans(r->right);
        
    }
    int minDiffInBST(TreeNode* root) {
        ans(root);
        //ans(root);
        int mini=INT_MAX;
        for(int i=1;i<vec.size();i++)
        {
            mini=min(mini,abs(vec[i]-vec[i-1]));
        }
        return mini;
    }
};