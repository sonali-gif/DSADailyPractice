#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};
bool check(node*left,node*right){
    if(left==NULL &&right==NULL){
        return true;
    }
    if(left==NULL||right==NULL){
        return false;
    }
    if(left->data!=right->data){
        return false;
    }
    return check(left->left,right->right)&&check(left->right,right->left);
}

bool symmetric(node*root){
    if(root==NULL){
        return true;
    }
    return check(root->left,root->right);
    
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(9);
    root->left->right=new node(7);
    root->right->right=new node(8);

   cout<< symmetric(root);
    return 0;
}
