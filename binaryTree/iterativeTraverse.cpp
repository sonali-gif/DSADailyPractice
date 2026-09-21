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
    void preOrder(node *root){
        if(root==NULL){
            return;
        }
        stack<node *>s;
        s.push(root);

        while(!s.empty()){
            node* curr= s.top();
            s.pop();

            cout<<curr->data<<" ";

            if(curr->right!=NULL){
                s.push(curr->right);
            }
            if(curr->left!=NULL){
                s.push(curr->left);
            }
        }
    }
    void postOrder(node *root){
        if(root==NULL){
            return;
        }
        stack<node *>s,s1;
        s.push(root);

        while(!s.empty()){
            node* curr= s.top();
            s.pop();
            s1.push(curr);

            if(curr->left!=NULL){
                s.push(curr->left);
            }
            if(curr->right!=NULL){
                s.push(curr->right);
            }
        }

        while(!s1.empty()){
            cout<<s1.top()->data<<" ";
            s1.pop();
        }
    }

    void inorder(node* root){
        stack<node *>s;
        node* curr=root;

        while(curr!=NULL || !s.empty()){
            while(curr!=NULL){
            s.push(curr);
            curr=curr->left;}
        

        curr=s.top();
        s.pop();

        cout<<curr->data<<" ";
        curr=curr->right;
    }}
int main(){
    node * root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->right->left=new node(4);
    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    inorder(root);
    return 0;
}