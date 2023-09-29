#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

int getSize(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return 1+getSize(root->left) + getSize(root->right);
    }
}
