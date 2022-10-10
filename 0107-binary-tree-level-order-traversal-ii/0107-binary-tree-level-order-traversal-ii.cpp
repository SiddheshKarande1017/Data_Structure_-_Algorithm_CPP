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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return{};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty())
        {
            int sx=q.size();
            vector<int> v;
            for(int i=0;i<sx;i++)
            {
                TreeNode  *r=q.front();
                q.pop();
                v.push_back(r->val);
                if(r->left)q.push(r->left);
                if(r->right) q.push(r->right);
            }
            ans.push_back(v); 
        }
        vector<vector<int>> ansf;
        for(int i=ans.size()-1;i>=0;i--)
        {
            vector<int> p=ans[i];
            ansf.push_back(p);
        }
        return ansf;
    }
};