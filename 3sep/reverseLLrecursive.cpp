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
class lst{
    public:
    node* head;
    node* tail;

    lst(){
        head=tail=NULL;
    }

    //inserAtEnd
    void insertatend(int val){
        node * newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    //reverse recursion
    void revrse(node* prev,node* curr){
        //base case
        if(curr==NULL){
            tail=head;
            head=prev;
            return;
        }

        node*next=curr->next;
        curr->next=prev;

        revrse(curr,next);
    }

    //reverse
    void reversee(){
        revrse(NULL,head);
    }
    //display
    void display (){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
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
        l1.insertatend(val);
    }
    l1.display();
    cout<<"reversed: "<<endl;
    l1.reversee();
    l1.display();
    return 0;
}