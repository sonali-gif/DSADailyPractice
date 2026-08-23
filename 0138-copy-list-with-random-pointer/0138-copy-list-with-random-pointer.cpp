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

        if(head == NULL) {
            return NULL;
        }

        // 1. Create copy nodes
        Node* temp = head;

        while(temp != NULL) {

            Node* copy = new Node(temp->val);

            copy->next = temp->next;
            temp->next = copy;

            temp = copy->next;
        }

        // 2. Set random pointers
        temp = head;

        while(temp != NULL) {

            if(temp->random != NULL) {
                temp->next->random = temp->random->next;
            }

            temp = temp->next->next;
        }

        // 3. Separate original and copied list
        Node* copyHead = head->next;
        temp = head;

        while(temp != NULL) {

            Node* copy = temp->next;

            temp->next = copy->next;

            if(copy->next != NULL) {
                copy->next = copy->next->next;
            }

            temp = temp->next;
        }

        return copyHead;
    }
};