/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node* , Node*> m;
        Node* temp=head;
        Node* newNode=new Node(0,NULL,NULL);
        Node* ptr=newNode;
        while(temp){
            int x=temp->val;
            Node* use=new Node(x, NULL, NULL);
            m[temp]=use;
            ptr->next=use;
            ptr=ptr->next;
            temp=temp->next;
            
        }
        temp=head;
        ptr=newNode->next;
        while(temp){
            ptr->random=m[temp->random];
            ptr=ptr->next;
            temp=temp->next;
        }
        return newNode->next;
    }
};
