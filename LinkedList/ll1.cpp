#include<bits/stdc++.h>
using namespace std;
//creating node
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class listt{
    public:
    node* head;
    node* tail;
    
    listt(){
    head=tail=NULL;
}

//insert at beginning
void push_front(int val){
    node* newNode=new node(val);
    //if list is empty
    if(head==NULL){
        head=tail=newNode;
        return;
    }
    //if not
        newNode->next=head;
        head=newNode;
}

//traverse or print
void print(){
    node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}};
int main(){
    //basic way to print LL
    // node* n1= new node(10);
    // node* n2= new node(20);
    // node* n3= new node(30);

    // n1->next=n2;
    // n2->next=n3;
    // print(n1);
    listt ll;
    ll.push_front(10);
    ll.push_front(30);
    ll.push_front(70);
    ll.print();
    return 0;
}