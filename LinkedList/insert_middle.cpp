#include <iostream>
using namespace std;

// Node structure
class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
    node* head;
    node* tail;

public:

    // Empty LL
    list() {
        head = tail = NULL;
    }

    // Put element in front of LL
    void push_front(int val) {
        node* newNode = new node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    // Put element at end of LL
    void push_back(int val) {
        node* newNode = new node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    // Delete first node
    void pop_front() {
        if (head == NULL) {
            cout << "Empty linked list" << endl;
            return;
        }

        node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;

        // If list becomes empty
        if (head == NULL) {
            tail = NULL;
        }
    }

    // Delete last node
    void pop_back() {
        if (head == NULL) {
            cout << "Empty linked list" << endl;
            return;
        }

        // Only one node
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        node* temp = head;

        while (temp->next != tail) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // Insert node at given position
    void insert(int val, int pos) {

        if (pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        // Insert at beginning
        if (pos == 0) {
            push_front(val);
            return;
        }

        node* temp = head;

        // Move to node before required position
        for (int i = 0; i < pos - 1; i++) {

            if (temp == NULL) {
                cout << "Invalid position" << endl;
                return;
            }

            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position" << endl;
            return;
        }

        node* newNode = new node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        // If inserted at end, update tail
        if (newNode->next == NULL) {
            tail = newNode;
        }
    }

    // Print linked list
    void printLL() {
        node* temp = head;

        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    list ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    ll.insert(4, 0);

    ll.printLL();

    return 0;
}