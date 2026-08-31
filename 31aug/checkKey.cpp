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

    int Findkey(int key){
        node *temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return 1;
            }
            temp=temp->next;
        }
        return 0;
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
   cout<< l1.Findkey(25);
}