#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class lst {
public:
    node* head;
    node* tail;

    lst() {
        head = tail = NULL;
    }

    // Insert At End
    void insertatend(int val) {
        node* newnode = new node(val);

        if (head == NULL) {
            head = tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Remove Last Node
    void deletend() {

        // Empty list
        if (head == NULL) {
            return;
        }

        // Only one node
        if (head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;   // IMPORTANT
        }

        node* temp = head;

        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }

    // Remove Nth Node From End
    void removeNth(int n) {

        // Empty list or invalid n
        if (head == NULL || n <= 0) {
            return;
        }

        node* fast = head;
        node* slow = head;

        // Move fast n steps
        for (int i = 0; i < n; i++) {

            // n > length
            if (fast == NULL) {
                return;
            }

            fast = fast->next;
        }

        // If fast becomes NULL,
        // delete the head
        if (fast == NULL) {

            node* del = head;

            head = head->next;

            if (head == NULL) {
                tail = NULL;
            }

            delete del;
            return;
        }

        // Move both pointers
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete slow->next
        node* del = slow->next;

        slow->next = slow->next->next;

        // If last node was deleted
        if (slow->next == NULL) {
            tail = slow;
        }

        delete del;
    }

    // Display
    void display() {

        node* temp = head;

        while (temp != NULL) {
            cout << temp->data << "-> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    lst l1;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        l1.insertatend(val);
    }

    l1.display();

    // For testing removeNth:
    int k;
    cin >> k;

    l1.removeNth(k);

    l1.display();

    return 0;
}