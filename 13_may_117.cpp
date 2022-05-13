/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return NULL;
      // Node* temp;
      // Node* ans = new Node();
      // temp = ans;
      queue<Node*> q;
      q.push(root);
      // ans->next = new Node(root->val);
      // ans = ans->next;
      // ans->next = new Node(NULL);
      // ans = ans->next;
      while(!q.empty()){
        int n = q.size();
        while(n--){
          Node* ans = q.front();
          q.pop();
          if(n == 0){
            ans->next = NULL;
          // ans = ans->next;
          }else{
            // ans->next = new Node(temp->val);
            ans->next = q.front();
          // ans = ans->next;
          }
          
          if(ans->left)q.push(ans->left);
          if(ans->right)q.push(ans->right);
        }
      //   ans->next = new Node(NULL);
      // ans = ans->next;
        // temp = temp->next;
      }
      return root;
    }
};
