//recursive way to find the depth or the height of the tree

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

//recursive function to calculate the max depth of the binary tree
int maxDepth(node *node)
{

    if (node == NULL)
        return 0;

    else
    {
        int left_depth = maxDepth(node->left);
        int right_depth = maxDepth(node->right);

        if (left_depth >= right_depth)
            return left_depth + 1;
        else
            return right_depth + 1; //make sure to add 1 to consider the root as well
    }
}

//helper function to add data to node and link it to left and right pointers
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

    root->left->left = newNode(4);
    root->right->right = newNode(5);
    root->right->right->right = newNode(10);

    cout << "The max height/depth of the tree is: " << maxDepth(root);
}

/*
tree visual

        1
    2       3
4               5
                    10

Depth should be 4
*/