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

// Iterative
void printLeft(Node* root, int level){
    if(root==NULL){
         return;
    }
    queue<Node*> q;
    q.push(root);
    while(q.empty()== false){
        int count = q.size();
        for(int i =0;i<count;i++){
            Node *curr = q.back();
            q.pop();
            if(i==0){
                cout << curr->key << " ";
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }
    }
}





//  recursive
// void printLeftView(Node* root,int level){
//     if(root==NULL){
//         return;
//     }
//     int maxLevel = 0;
//     if (maxLevel < level)
//     {
//         cout << root->key << " ";
//         maxLevel = level;
//     }
//     printLeftView(root->left,level+1);
//     printLeftView(root->right,level+1);
// }

// void printleftView(Node* root){
//     printLeftView(root,1);
// }