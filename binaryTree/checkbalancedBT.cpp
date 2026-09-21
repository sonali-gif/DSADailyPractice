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

int checkBalanced(node* root){
    if(root==NULL){
        return 0;
    }

    int left=checkBalanced(root->left);
    if(left==-1){
        return -1;
    }
    int right=checkBalanced(root->right);
    if(right==-1){
        return -1;
    }

    if(abs(left-right)>1){
        return -1;
    }
    return 1+max(left,right);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(9);
    root->left->right=new node(7);
    root->right->right=new node(8);

    if(checkBalanced(root)==-1){
        cout<<"not balanced";
    }else{
        cout<<"balanced";
    }
    return 0;
}