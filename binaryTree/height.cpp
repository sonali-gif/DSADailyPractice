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

int height(node* root){
    if(root==NULL) {
    return 0;
    }

    int l= height(root->left);
    int r= height(root->right);

    return 1+max(l,r);
}
int main(){
    node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->right->left=new node(4);

   cout<<height(root);
   return 0;
}