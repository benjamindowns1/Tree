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


void spriralTraversal(Node* root){
    if(root==NULL){ return;}
    queue<Node*>q;
    stack<int>s;
    bool reverse=false;
    q.push(root);
    while(q.empty()==false){
        int count = q.size();
        for(int i=0;i<count;i++){
            Node* curr = q.front();
            q.pop();
            if(reverse){
                s.push(curr->key);
            }
            else{
                cout << curr->key <<" ";
            }
            if(curr->left!=NULL){ q.push(curr->left);}
            if(curr->right!=NULL) {q.push(curr->right);}
        }
        if(reverse){
            while(s.empty()==false){
                cout << s.top() << " ";
                s.pop();
            }
        }
        reverse = !reverse; 
        cout << endl;
    }
}