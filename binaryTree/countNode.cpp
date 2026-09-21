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

int cntNode(node* root){
    if(root==NULL){
        return 0;
    }
    return 1+cntNode(root->left)+cntNode(root->right);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(9);
    root->left->right=new node(7);
    root->right->right=new node(8);

    cout<<cntNode(root);
    return 0;
}