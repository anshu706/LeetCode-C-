class Solution
{
public:
    void dfs(TreeNode *root, vector<int> &result)
    {
        if (root == nullptr)
            return;

        result.push_back(root->val); // Root
        dfs(root->left, result);     // Left
        dfs(root->right, result);    // Right
    }

    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> result;
        dfs(root, result);
        return result;
    }
};
