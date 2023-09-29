#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key=k;
        left= right = NULL;
    }
};

void postOrder(Node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->key << " ";
    }
}