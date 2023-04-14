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
    int sttoin(string t)
    {
        int p=0;
        int y=0;
        for(int i=t.size()-1;i>=0;i--)
        {
            if(t[i]=='1') y+=pow(2,p);
            p++;
            
        }
        
        return y;
    }
    void dfs(TreeNode *root, string sk)
    {
          if(root==NULL)
          {
              
              return;
          }
          if(!root->right && !root->left)
          {
              sk+=to_string(root->val);
              int p=sttoin(sk);
              //cout<<sk<<endl;
              ans+=p;
              return;
          }
        dfs(root->left,sk+to_string(root->val));
         dfs(root->right,sk+to_string(root->val));
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root,"");
        return ans;
    }
};