#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

int sumNode(node* root){
    if(root==NULL){
        return 0;
    }
    return root->data+sumNode(root->left)+sumNode(root->right);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(9);
    root->left->right=new node(7);
    root->right->right=new node(8);

    cout<<sumNode(root);
    return 0;
}