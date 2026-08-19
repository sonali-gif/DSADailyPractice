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
    ll.push_front(2);
    ll.push_front(3);
    ll.printLL();
    return 0;
}