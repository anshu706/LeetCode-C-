class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> r;
        if (root == NULL)
            return r;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int sz = q.size();
            while (sz > 0)
            {
                TreeNode *temp = q.front();
                q.pop();

                if (temp->left != NULL)
                    q.push(temp->left);
                if (temp->right != NULL)
                    q.push(temp->right);

                if (sz == 1)
                    r.push_back(temp->val);
                sz--;
            }
        }
        return r;
    }
};