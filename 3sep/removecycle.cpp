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
    //remove cycle
    void removeCycle(){
        //step1 detect cycle
        node *slow=head;
        node* fast=head;
        bool cyc=false;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
            cyc=true;
            break;
        }
        }
        if(!cyc){
            cout<<"no cycle";
            return;
        }
        //step2-find cycle strt
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }//slow is starting node
        //frind last node
        node* temp=slow;
        while(temp->next!=slow){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
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
    cout<<endl;
   l1.removeCycle();
   cout<<endl;
   l1.display();
    return 0;
}