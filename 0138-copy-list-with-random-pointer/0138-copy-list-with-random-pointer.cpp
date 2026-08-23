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
        Node* cur = head;
        while(cur){
            Node* copy = new Node(cur->val);
            Node* next = cur->next;
            cur->next = copy;
            copy->next = next;
            cur = next;
        }
        cur = head;
        while(cur){
            if(cur->random){
                cur->next->random = cur->random->next;
            }
            cur = cur->next->next;
        }
        Node* dummy = new Node(0);
        Node* temp = dummy;
        cur = head;
        while(cur){
            Node* copycur = cur->next;
            cur->next = copycur->next;
            temp->next = copycur;
            temp = copycur;
            cur = cur->next;
        }
        return dummy->next;
    }
};