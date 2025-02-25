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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<vector<int>> result;
        if (root == nullptr)
            return result;

        q.push(root);

        while (!q.empty())
        {
            vector<int> currentLevel;
            int levelSize = q.size();

            for (int i = 0; i < levelSize; i++)
            {
                TreeNode *parent = q.front();
                currentLevel.push_back(parent->val);
                q.pop();

                if (parent->left)
                    q.push(parent->left);
                if (parent->right)
                    q.push(parent->right);
            }
            result.push_back(currentLevel);
        }
        return result;
    }
};