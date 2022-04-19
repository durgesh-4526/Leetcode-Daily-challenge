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
  vector<int> ans;
  int i = 0;
  void helper(TreeNode* root){
    if(!root)return;
    helper(root->left);
    ans.push_back(root->val);
    helper(root->right);
  }
  void maintree(TreeNode* root){
    if(!root)return;
    maintree(root->left);
    root->val = ans[i++];
    maintree(root->right);
  }
    void recoverTree(TreeNode* root) {
        helper(root);
      sort(ans.begin(),ans.end());
      maintree(root);
    }
};
