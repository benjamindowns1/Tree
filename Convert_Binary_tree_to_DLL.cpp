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

struct DLL{
    int val;
    Node* next;
    Node* prev;
    DLL(int k){
        val = k;
        next= prev=NULL;
    }
};


Node* prev= NULL;
Node *btToDLL(Node* root){
    if(root==NULL){
        return root;
    }
    Node* head = btToDLL(root->left);
    if(prev==NULL){
        head=root;
    }
    else{
        root->left = prev;
        prev->right= root;
    }
    return head;
}


// void converttoDLL(Node* root){
//     Node* curr = root;
//     while(curr->left!=NULL){
//         curr = curr->left;
//     }
//     Node* rightmostElement = root;
//     while (rightmostElement->right !=NULL){
//         rightmostElement = rightmostElement->right;
//     }
//         DLL *head = new DLL(root);
//         while(head)
//     head->prev = root->left;
//     head->next = root->right;

// }