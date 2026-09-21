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
void levelTraverse(node *root){
    if(root==NULL){
        return;
    }
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *curr=q.front();
        q.pop();
        cout<<curr->data<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }

    }
    
}
int main(){
    node *root=new node(2);
    root->left=new node(4);
    root->right=new node(7);
    root->left->right=new node(5);
    cout<<"level order traversal: ";
    levelTraverse(root);
    return 0;
}