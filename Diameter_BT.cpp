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

// Efficient Solution
// O(n) time , No overhead of map;
int res =0;
int height(Node* root){
    if(root==NULL){ return 0; }
            int lh = height(root->left);
            int rh = height(root->right);
            res = max(res,lh+rh+1);

    return 1+ max(lh,rh);
}
// This function retruns height but sets the "res" vaue to have diameter





// Better Soln - O(n)
//  precompute the height of every node and store it in a map
//  use unordered map



// Naive Solution
// int height(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     else{
//         return 1+ max(height(root->left),height(root->right));
//     }
// }

// int diameter(Node* root){
//     if(root==NULL){ return 0;}
//     int d1 = 1+height(root->left)+height(root->right);
//     int d2 = diameter(root->left);
//     int d3 = diameter(root->right);

//     return max(d1,max(d2,d3));
// }