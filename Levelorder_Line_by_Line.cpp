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


// Method -2
void printLevelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node* > q;
    q.push(root);
    while(q.empty()== false){
        int count = q.size();
        for(int i =0;i<count;i++){
            Node* curr = q.front();
            q.pop();
            cout << curr->key << " ";
        if(curr->left!=NULL){ q.push(curr->left);}
        if(curr->right!=NULL) { q.push(curr->right);}
        } 
    }
}




//  Method - 1 
// void printLevelOrderLine(Node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(q.size()>1){
//         Node* curr = q.front();
//         q.pop();
//         if(curr==NULL){
//             cout << "\n";
//             q.push(NULL);
//             continue;
//         }
//         cout << curr->key << " ";
//         if(curr->left!=NULL){
//             q.push(curr->left);
//         }
//         if(curr->right!=NULL){
//             q.push(curr->right);
//         }
//     }
    
// }