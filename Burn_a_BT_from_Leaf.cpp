#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};

// Two things done
// 1. Return height
// 2. set dist if given leaf is descendant
int res=0;
int burnTime(Node* root,int leaf, int &dist){
    if(root==NULL){return 0;}
    if(root->key==leaf){ dist=0; return 1;}
    int ldist=-1,rdist=-1;
    int lh = burnTime(root->left,leaf,ldist);
    int rh = burnTime(root->right,leaf,rdist);
    if(ldist!=-1){
        dist = ldist+1;
        res = max(res,dist+lh);
    }
    else if(rdist!=-1){
        dist = rdist +1;
        res = max(res,dist+rh);
    }
    return max(lh,rh)+1;
}