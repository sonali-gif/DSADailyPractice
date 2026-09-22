#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=right=0;
    }
};
int ans=INT_MIN;
int solve(node* root){
    if(root==0){
        return 0;
    }
    int l=max(0,solve(root->left));
    int r=max(0,solve(root->right));

    ans=max(ans,l+root->data+r);

    return root->data+max(l,r);
}
int maxPath(node* root){
    solve(root);
    return ans;
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(9);
    root->left->right=new node(7);
    root->right->right=new node(8);

    cout<<maxPath(root);
    return 0;
}