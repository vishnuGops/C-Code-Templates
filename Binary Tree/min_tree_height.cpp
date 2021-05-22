//recursive way to find the min height of the tree

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

int minDepth(node *node)
{

    if (node == NULL)
        return 0;

    //check to see if root has no kids
    if (node->left == NULL && node->right == NULL)
        return 1;

    int left_depth = INT_MAX;
    int right_depth = INT_MAX;

    if (node->left)
        left_depth = minDepth(node->left);

    if (node->right)
        right_depth = minDepth(node->right);

    int mini = min(left_depth, right_depth) + 1;
    return mini;
}

node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    //root->left->right = newNode(4);
    //root->left->left = newNode(8);

    root->right->right = newNode(5);
    root->right->left = newNode(6);
    root->right->left->left = newNode(7);

    cout << "Minimum Depth/Height of the tree = " << minDepth(root);
}

/*
tree visual

        1
    2       3
           6   5
                    10

Depth should be 4
*/