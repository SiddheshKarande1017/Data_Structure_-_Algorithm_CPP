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
    //vector<TreeNode *> ans;
    set<vector<int>> ans;
    void ans1(vector<int> nums, int i)
    {
        if(i>=nums.size())
        {
            ans.insert(nums);
            return;
        }
        
        for(int j=i;j<nums.size(); j++)
        {
            swap(nums[i],nums[j]);
            ans1(nums, i+1);
            swap(nums[i],nums[j]);
        }
    }
    void construct(int n, TreeNode** root)
    {
        if(*root==NULL)
        {
            *root= new TreeNode(n);
            return;
        }
        if((*root)->val > n)
        {
            construct(n, &(*root)->left);
        }
        else 
        {
            construct(n, &(*root)->right);
        }
    }
    bool check(TreeNode *t1, TreeNode *t2)
    {
        if((t1==NULL) && (t2==NULL)) return true;
        
        return (t1 && t2) && (t1->val ==t2->val) && check(t2->left, t2->left) && check(t1->right,t2->right);
    }
    bool findSimilar(TreeNode *root1, TreeNode *root2)
    {
          
        if ((root1 == NULL) && (root2 == NULL))
                return true;
         
        return (root1 && root2) && (root1->val == root2->val) &&
            findSimilar(root1->left, root2->left) &&
            findSimilar(root1->right, root2->right);
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<int> temp;
        for(int i=1;i<=n;i++)
        {
            temp.push_back(i);
        }
        ans1(temp, 0);
        vector<TreeNode*> ans2;
        for(auto it:ans)
        {
            TreeNode *root=NULL;
            
            for(int i=0;i<it.size();i++)
            {
                construct(it[i], & root);
            }
            bool pt=false;
            for(auto ik:ans2)
            {
                if(findSimilar(ik,root)) pt=true;
            }
           if(!pt)
            ans2.push_back(root);
            pt=false;
        }
       return ans2;
            
    }
};