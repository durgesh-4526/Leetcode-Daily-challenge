/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* headclone = head;
      ListNode* ans = head;
      vector<int> store;
      while(headclone){
        store.push_back(headclone->val);
        headclone = headclone->next;
      }
      sort(store.begin(),store.end());
      for(int i = 0;i<store.size();i++){
        ans->val = store[i];
        ans = ans->next;
      }return head;
    }
};
