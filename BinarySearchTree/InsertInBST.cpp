#include<bits/stdc++.h>
using namespace std;

struct node{
    
    int data;
    node *left;
    node *right;
    
    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

void displaytree(struct node* root){
    if(root == NULL){
        return;
    }
    displaytree(root->left);
    cout<<root->data<<"->";
    displaytree(root->right);
}

struct node* insert(struct node *root, int x){

    struct node* temp = new node(x);
    if(root == NULL){
        return temp;
    }
    if(x < root->data){
        root->left = insert(root->left,x);
    }else{
       root->right = insert(root->right,x);
    }
    return root;
}

void printkth(node *root, int k,int count){
    
    if(root != NULL){
        printkth(root->left, k, count);
        
        if(count == k){
            cout<<root->data<<endl;
        }
        count++;
        printkth(root->right, k, count);
        count++;
    }
}

int main(){
    
    struct node *root = new node(50);

    root = insert(root,20);
    root = insert(root,100);
    root = insert(root,10);
    root = insert(root,40);
    root = insert(root,70);
    root = insert(root,120);
    root = insert(root,60);
    root = insert(root,80);
    // root->left = new node(30);
    // root->right = new node(40);
    
    // root->left->left = new node(50);
    // root->left->right = new node(60);
    
    // root->right->left = new node(31);
    
    displaytree(root);

    printkth(root,3,0);
    
    return 0;
    
}