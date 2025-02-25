/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == nullptr)
            return ans;

        stack<TreeNode *> stk;
        unordered_map<TreeNode *, int> taken;
        stk.push(root);

        ans.push_back(root->val);
        while (!stk.empty())
        {
            TreeNode *v = stk.top();
           
            if (v->left && !taken[v->left])
            {
                stk.push(v->left);
                taken[v->left] = 1;
                ans.push_back(v->left->val);
            }
            else if (v->right && !taken[v->right])
            {
                stk.push(v->right);
                taken[v->right] = 1;
                ans.push_back(v->right->val);
            }
            else
            {
                stk.pop();
            }
        }
        return ans;
    }
};