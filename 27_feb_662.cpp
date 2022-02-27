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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode *, unsigned long long>> q, temp;
        int sol = 1;
        q.push(make_pair(root, 1));
        
        while (q.size() != 0) {
            while (q.size() != 0) {
                pair<TreeNode*, unsigned long long> cur = q.front();
                q.pop();
                if (cur.first->left) {
                    temp.push(make_pair(cur.first->left, 2 * cur.second));
                }
                if (cur.first->right) {
                    temp.push(make_pair(cur.first->right, (2 * cur.second) + 1));
                }
            }
            q.swap(temp);   
            if (q.size() > 1) {
                sol = max(sol, (int)(q.back().second - q.front().second + 1));
            }
        }      
        return sol;
    }
};
