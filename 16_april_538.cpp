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
  int add = 0;
  void check(TreeNode* root){
    if(!root)return;
    if(root->right)check(root->right);
    add+= root->val;
    root->val = add;
    if(root->left)check(root->left);
  }
    TreeNode* convertBST(TreeNode* root) {
        check(root);
      return root;
    }
};
