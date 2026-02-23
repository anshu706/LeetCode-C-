class Solution
{
public:
    int postIndex;
    unordered_map<int, int> inorderMap;

    TreeNode *build(vector<int> &inorder, vector<int> &postorder, int left, int right)
    {
        if (left > right)
            return NULL;

        // Root is current postIndex
        int rootVal = postorder[postIndex--];
        TreeNode *root = new TreeNode(rootVal);

        int inorderIndex = inorderMap[rootVal]; // inorder

        root->right = build(inorder, postorder, inorderIndex + 1, right); // right subtree

        root->left = build(inorder, postorder, left, inorderIndex - 1); // left subtree

        return root;
    }

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        postIndex = postorder.size() - 1;

        // Store inorder indices
        for (int i = 0; i < inorder.size(); i++)
        {
            inorderMap[inorder[i]] = i;
        }

        return build(inorder, postorder, 0, inorder.size() - 1);
    }
};