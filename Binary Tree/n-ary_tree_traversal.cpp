// Recursive CPP program for level
// order traversal of Binary Tree
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct Node
{
    int data;
    vector<Node *> children;

    Node() {}

    Node(int data)
    {
        this->data = data;
    }

    Node(int data, vector<Node *> children)
    {
        this->data = data;
        this->children = children;
    }
};

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
        preOrder(root->children[i]);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    for (int i = 0; i < root->children.size(); i++)
        postOrder(root->children[i]);
    cout << root->data << " ";
}

int main()
{
    Node *root = new Node(1);

    root->children.push_back(new Node(3));
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(4));

    root->children[0]->children.push_back(new Node(5));
    root->children[0]->children.push_back(new Node(6));

    root->children[1]->children.push_back(new Node(7));
    root->children[1]->children.push_back(new Node(8));
    root->children[1]->children.push_back(new Node(9));

    root->children[2]->children.push_back(new Node(10));

    cout << "\nPreorder traversal of n-ary tree is \n";
    preOrder(root);

    cout << "\nPostorder traversal of n-ary tree is \n";
    postOrder(root);

    return 0;
}