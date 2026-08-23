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

//insert at end
void push_back(int val){
    node* newNode=new node(val);
    //if list is empty
    if(head==NULL){
        head=tail=newNode;
        return;
    }
    //if not
        tail->next=newNode;
        tail=newNode;
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
    listt ll;
    // ll.push_back(10);
    // ll.push_back(30);
    // ll.push_back(70);
    // ll.print();

    //taking i/p from user
    int n;
    cout<<"how many elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cout<<"enter value: ";
        cin>>val;

        ll.push_back(val);
    }
    cout<<"linked list ";
    ll.print();
    return 0;
}