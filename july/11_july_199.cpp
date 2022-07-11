class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (!root)
        {
            return ans;
        }
        queue<TreeNode *> q;
        q.push(root);
        // ans.push_back(root->val);
        while (!q.empty())
        {
            int size = q.size();
            // int i = size;
            for (int i = 0; i < size; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
                if (i == size - 1){
                  ans.push_back(temp->val);
                }
                    
                // i--;
            }
        }
        return ans;
    }
};
