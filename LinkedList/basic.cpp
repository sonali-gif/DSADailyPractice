#include<bits/stdc++.h>
using namespace std;
int main(){
    struct node{
        int data;
        node* next;
    
  node(int value){
    data=value;
    next=nullptr;
  }
};
//  node* node1= new node();
  node* head= new node(12);
  head ->next =new node(20);
  head ->next->next =new node(30);
  head ->next->next ->next =new node(40);

  //print
  node* temp=head;
  while(temp !=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  return 0;
}