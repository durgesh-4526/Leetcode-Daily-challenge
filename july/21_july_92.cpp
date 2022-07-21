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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* a = head;
        ListNode* b = head;
        int q = left;
        while(--q){
            a = a->next;
            b = b->next;
        }
        vector<int> v;
        for(int i = 0;i<right-left+1;i++){
            v.push_back(a->val);
            a = a->next;
        }
        reverse(v.begin(),v.end());
        int w = 0;
        while(w <= v.size()-1){
            b->val = v[w++];
            b = b->next;
        }
        return head;
    }
};
