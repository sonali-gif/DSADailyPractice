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
int ans=0;
int height(node* root){
    
    if(root==NULL){
        return 0;
    }
    int l=height(root->left);
    int r=height(root->right);

    ans=max(ans,l+r);
    return 1+max(l,r);
}
int diameter(node* root){
    height(root);
    return ans;
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(9);
    root->left->right=new node(7);
    root->right->right=new node(8);

    cout<<diameter(root);
    return 0;
}