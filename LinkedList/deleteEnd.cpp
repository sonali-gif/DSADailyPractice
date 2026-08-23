#include<bits/stdc++.h>
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
class listt{
    public:
    node* head;
    node* tail;

    listt(){
        head=tail=NULL;
    }

    //insert at end
    void push_back(int val){
        node* newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    //deleting at end-O(N)
    void pop_back(){
        //empty list
        if(head==NULL){
            return;
        }
        //one node
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }
        node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    //print
    void print(){
        node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    listt ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.print();
    cout<<endl;
    ll.pop_back();
    ll.print();
    return 0;
}