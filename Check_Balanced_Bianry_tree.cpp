#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key= k;
        left=right=NULL;
    }
};

// balanced Binary tree = difference between height of leftsubtree and rightsubtree
//   should not be grater than 1

// O(n)
int  isBalancedTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftheight=isBalancedTree(root->left);
    if(leftheight==-1){
        return -1;
    }
    int rightHeight = isBalancedTree(root->right);
    if(rightHeight==-1){
        return -1;
    }
    if(abs(leftheight-rightHeight)>1){
        return -1;
    }
    else{
        return max(leftheight, rightHeight)+1;
    }
}