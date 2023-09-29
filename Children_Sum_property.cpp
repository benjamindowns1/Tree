#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key= k;
        left= right-NULL;
    }
};

bool isChildrenSum(Node* root){
    if(root==NULL){
        return true;
    }
    if(root->left== NULL && root->right==NULL){
        return true;
    }
    int sum =0;
    if(root->left!= NULL){
        sum += root->left->key;
    }
    if(root->right!=NULL){
        sum += root->right->key;
    }
    return (root->key== sum && isChildrenSum(root->left) && isChildrenSum(root->right));
}