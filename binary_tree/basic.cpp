#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};
//creating binary tree
    static int idx=-1;
    node* buildtree(vector<int>preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }
        node* root=new node(preorder[idx]);
        root->left=buildtree(preorder);//left
        root->right=buildtree(preorder);//right

        return root;
    }
 //preorder traversal
    void preorder(node* root){
        if(root==NULL){
            return ;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    //inorder traversal
    void inorder(node* root){
        if(root==NULL){
            return ;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
   //postorder traversal
   void postorder(node* root){
        if(root==NULL){
            return ;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

int main(){
    vector<int>arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1  };
    node* root=buildtree(arr);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    preorder(root);
    cout<<endl;

    inorder(root);
    cout<<endl;

    postorder(root);
    cout<<endl;
    return 0;
}