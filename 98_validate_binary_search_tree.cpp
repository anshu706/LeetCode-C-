class Solution
{
public:
    bool isValidBST(TreeNode *root)
    {
        return Valid2(root, LLONG_MIN, LLONG_MAX);
    }

    bool Valid2(TreeNode *root, long long minVal, long long maxVal)
    {
        if (root == NULL)
            return true;

        if (root->val <= minVal || root->val >= maxVal)
            return false;

        return (Valid2(root->left, minVal, root->val) &&
                Valid2(root->right, root->val, maxVal));
    }
};