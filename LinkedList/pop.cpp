#include<iostream>
using namespace std;
//Node structure
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
    //empty LL
    list(){
        head=tail=NULL;
    }
//put element in front of LL
    void push_front(int val){
        node * newNode =new node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
//put element in end of LL
    void push_back(int val){
        node * newNode =new node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
 //deleting first node
 void pop_front(){
    if(head==NULL){
        cout<<"empty linked list";
        return;
    }
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
 }   
 //deleting last node
 void pop_back(){
    if(head==NULL){
        cout<<"empty linked list";
        return;
    }
    node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
 }  

//printing linkedlist
    void printLL(){
        node * temp=head;
        while(temp !=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(10);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.pop_front();
    ll.pop_back();
    ll.printLL();
    return 0;
}