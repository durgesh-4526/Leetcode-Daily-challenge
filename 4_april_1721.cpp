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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp1 = head;
        ListNode *temp2 = head;
        ListNode *temp3 = head;
        int count = 0;
        while(temp1->next){
            temp1 = temp1->next;
            count++;
        }
      count++;
      count++;
        int i = 1;
        while(i<count){
            if(i<k)temp3 = temp3->next;
            if(i<count-k)temp2 = temp2->next;
          i++;
        }
        swap(temp2->val,temp3->val);
        return head;
    }
};
