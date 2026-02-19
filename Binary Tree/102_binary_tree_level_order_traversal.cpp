class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == nullptr)
            return result;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int sz = q.size();
            vector<int> level;

            while (sz > 0)
            {
                TreeNode *temp = q.front();
                q.pop();

                level.push_back(temp->val);

                if (temp->left != nullptr)
                    q.push(temp->left);
                if (temp->right != nullptr)
                    q.push(temp->right);

                sz--;
            }
            result.push_back(level);
        }
        return result;
    }
};
