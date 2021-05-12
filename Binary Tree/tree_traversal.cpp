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
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void printPreorder(struct Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    if (node->left)
        printPreorder(node->left);

    if (node->right)
        printPreorder(node->right);
}
void printInorder(struct Node *node)
{
    if (node == NULL)
        return;

    if (node->left)
        printInorder(node->left);

    cout << node->data << " ";

    if (node->right)
        printInorder(node->right);
}
void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;

    if (node->left)
        printPostorder(node->left);

    if (node->right)
        printPostorder(node->right);

    cout << node->data << " ";
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    return 0;
}