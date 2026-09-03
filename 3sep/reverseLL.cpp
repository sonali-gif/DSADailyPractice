#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class lst{
    public:
    node* head;
    node* tail;

    lst(){
        head=tail=NULL;
    }

    void insertAtend(int val){
        node* newNode=new node(val);
        if(head==NULL){
          head=tail=newNode;
          return;
        }else{
            tail->next=newNode;
          tail=newNode;
        }  
    }

    void reverse(){
        node* prev=NULL;
        node*curr=head;
        while(curr!=NULL){
            node*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        tail=head;
        head=prev;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    lst l1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        l1.insertAtend(val);
    }
    l1.display();
    cout<<endl;
    l1.reverse();
    cout<<"reversed list: ";
    l1.display();
}