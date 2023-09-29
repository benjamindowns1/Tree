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

//  we use special marker for NULL, Here we have used -1 for NULL
const int EMPTY = -1;
void serialize(Node *root, vector<int> &arr)
{

    if (root == NULL)
    {
        arr.push_back(EMPTY);
        return;
    }
    arr.push_back(root->key);
    serialize(root->left, arr);
    serialize(root->right, arr);
}

int index = 0;
Node *deSerialize(vector<int> &arr)
{
    if (index = arr.size())
    {
        return NULL;
    }

    int val = arr[index];
    index++;
    if (val == EMPTY)
    {
        return NULL;
    }
    Node *root = new Node(val);
    root->left = deSerialize(arr);
    root->right = deSerialize(arr);
    return root;
}