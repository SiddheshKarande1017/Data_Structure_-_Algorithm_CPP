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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        q.push(root);int y=0;
        while(!q.empty())
        {
            int sx=q.size();vector<int> t;
            for(int i=0;i<sx;i++)
            {
                TreeNode* r=q.front();
                q.pop();
                t.push_back(r->val);
                if(r->left)q.push(r->left);
                if(r->right)q.push(r->right);
                
            }
            if(y%2==0)ans.push_back(t);
            else
            {
                reverse(t.begin(),t.end());
                ans.push_back(t);
            }
            y++;
        }
        return ans;
    }
};