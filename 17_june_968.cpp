/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
    int ans = 0;
    int need = 1;
    int noneed = -1;
    int camera = 0;
    int helper(TreeNode *root)
    {
        if (!root) return noneed;
        int l = helper(root->left);
        int r = helper(root->right);
        if (l == need || r == need)
        {
            ans++;
            return camera;
        }
        else if (l == camera || r == camera) return noneed;
        return need;
    }
    int minCameraCover(TreeNode *root)
    {
        int a = helper(root);
        if (a == need)
        {
            ans++;
        }
        return ans;
    }
};
