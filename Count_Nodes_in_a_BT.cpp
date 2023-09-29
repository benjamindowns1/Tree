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


// Efficient Solution: O(log(n)* log(n))

int countNodes(Node* root){
     int lh=0, rh=0;
     Node* curr = root;
     while(curr!=NULL){
        lh++;
         curr = curr->left;
     }
     curr = root;
     while(curr!=NULL){
        rh++;
        curr = curr->right;
     }
     if(lh==rh){
        return pow(2,lh)-1;
     }
     else{
        return 1+ countNodes(root->left)+ countNodes(root->right);
     }
}




// Naive Solution
// int countNodes(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     else{
//         return 1+ countNodes(root->left) + countNodes(root->right);
//     }
// }