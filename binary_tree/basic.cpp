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

int main(){
    vector<int>arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1  };
    node* root=buildtree(arr);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    return 0;
}