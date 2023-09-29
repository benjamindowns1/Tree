#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int preIndex = 0;
Node *btFromInPre(int *pre[], int *in[], int is, int ie)
{
    if (is > ie)
    {
        return NULL;
    }
    Node *root = new Node(pre[preIndex++]);

    int inIndex;
    for (int i = is; i <= ie; i++)
    {
        if (in[i] == root->key)
        {
            inIndex = i;
            break;
        }
    }
    root->left = btFromInPre(in, pre, is, inIndex - 1);
    root->right = btFromInPre(in, pre, inIndex + 1, ie);

    return root;
}