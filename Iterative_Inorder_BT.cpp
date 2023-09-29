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


void iterativeInorder(Node* root){
    stack<Node*> s;
    Node* curr = root;
    while(curr!=NULL || s.empty()==false){
        while (curr!=NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top(); s.pop();
        cout << curr->key << " ";
        curr = curr->right;
        
    }

}