#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head) {

    Node* slow = head;
    Node* fast = head;

    // Step 1: Detect loop
    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Loop detected\n";
            break;
        }
    }

    // No loop
    if (fast == NULL || fast->next == NULL) {
        cout << "No loop\n";
        return;
    }

    // Step 2: Find starting point of loop
    slow = head;

    while (slow->next!= fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    // break loop
    fast->next = NULL;
}

void printList(Node* head) {

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Creating loop:
    // 40 → 20
    head->next->next->next->next = head->next;

    removeLoop(head);

    printList(head);

    return 0;
}