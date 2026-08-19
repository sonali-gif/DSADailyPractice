#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class list{
    node* head;
    node* tail;
    public:
     list(){
        head=tail=NULL;
    }

    void push_back(int val){
        node* newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }

   //middle of LL
   node* middleNode(){
    node* slow=head;
    node* fast=head;
    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
   }

    void printLL(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
list ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    cout << "Original: ";
    ll.printLL();

    cout << ll.middleNode()->data;
    
    return 0;
}