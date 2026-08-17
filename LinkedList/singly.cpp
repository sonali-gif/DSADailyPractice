#include<bits/stdc++.h>
using namespace std;
 struct node{
        int data;
        node* next;
    
  node(int value){
    data=value;
    next=nullptr;
  }
};
int main(){
    int n;
    cin>>n;
    node* head=nullptr;
    node* tail=nullptr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        node* newnode =new node(x);
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }

  //print
  node* temp=head;
  while(temp !=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  return 0;
}