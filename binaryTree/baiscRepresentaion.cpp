#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
     node* left;
     node* right;

    node(int val){
        data=val;
        right=left=NULL;
    }
};
//preorder traversal
void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);   
}

//inorder traversal
void InOrder(node* root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

//postorder traversal
void PostOrder(node* root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->right->left=new node(4);

   cout<<"preorder ";
   preOrder(root);

   cout<<"\nInOorder ";
   InOrder(root);

   cout<<"\nPostorder ";
   PostOrder(root);
}