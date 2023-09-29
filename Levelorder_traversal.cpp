#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};


int height(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right));
    }
}

void kthNodes(Node* root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout << root->key << " ";
    }
    else{
        kthNodes(root->left,k-1);
        kthNodes(root->right,k-1);
    }
} 

void printLevel(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
        Node* curr = q.front();
        q.pop();
        cout << curr->key<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
