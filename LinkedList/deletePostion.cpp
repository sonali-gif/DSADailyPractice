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
    //delete at beginning
    void pop_front(){
        if(head==NULL){
            return;

        }
        node* temp=head;
        head= head->next;
        delete(temp);
    }
    //deleting at position-O(N)
    void deletee(int pos){
        if(head==NULL){
            return;
        }
        if(pos==0){
            pop_front();
            return;
        }
        node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        node* toDelete =temp->next;
        temp->next=toDelete->next;
        delete toDelete;
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
    ll.deletee(2);
    ll.print();
    return 0;
}