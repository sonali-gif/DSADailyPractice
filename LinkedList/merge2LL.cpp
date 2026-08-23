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
    
    //push_back
    void push_back(int val){
        node* newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }

    //merge
    node* merge(node* head1,node* head2){
        node* dummy =new node(-1);
        node* temp=dummy;

        while(head1!=NULL && head2 !=NULL){
            if(head1->data<=head2->data){
            temp->next=head1;
            head1=head1->next;
        }else{
            temp->next=head2;
            head2=head2->next;
        }
        temp=temp->next;
        }
        if(head1 != NULL)
        temp->next = head1;
    else
        temp->next = head2;

    return dummy->next;
    }
    //print
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    listt l1, l2, l3;

    l1.push_back(5);
    l1.push_back(10);
    l1.push_back(20);

    l2.push_back(7);
    l2.push_back(15);
    l2.push_back(25);

    l3.head = l3.merge(l1.head, l2.head);

    l3.print();
    return 0;
}