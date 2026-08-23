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

    //reverse ll
    void reverse(){
        node* prev=NULL;
        node* curr=head;
         
         //time comp-O(n)
         while(curr!=NULL){
            node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
         }
         head=prev;
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

    cout << "Original: ";
    ll.printLL();

    ll.reverse();

    cout << "Reversed: ";
    ll.printLL();
    return 0;
}