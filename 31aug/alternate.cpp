#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
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
    void insertAtEnd(int val){
        node *newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void alternate(){
        node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            if(cnt%2 !=0){
                cout<<temp->data<<" ";
            }
            temp=temp->next;
        }
    }
    void display(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    listt l1;
    l1.insertAtEnd(23);
    l1.insertAtEnd(22);
    l1.insertAtEnd(21);
    l1.insertAtEnd(20);
    l1.display();
    cout<<endl;
    l1.alternate();
}