#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left=right=NULL;
    }
};

void nodesAtK(Node*root, int k){
    if(root= NULL){
        return;
    }
    if(k==0){
        cout << root->key << " ";
    }
    else{
        nodesAtK(root->left,k-1);
        nodesAtK(root->right,k-1);
    }
}