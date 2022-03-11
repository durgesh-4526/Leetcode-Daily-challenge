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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0)return head;
        ListNode* size = head;
        int a = 1;
        while(size && size->next){
            a++;
            size = size->next;
        }
        // ListNode* ak = head;
        size->next = head;
        k = k%a;
        k = a-k;
        while(k--){

            size = size->next;
        }
        head = size->next;
        size->next = NULL;
        return head;
    }
};
