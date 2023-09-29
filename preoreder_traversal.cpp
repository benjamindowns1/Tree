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

void preorder(Node* root){
    if(root!=NULL){
        cout << (root->key) << " ";
        preorder(root->left);
        preorder(root->right);
    }
}