#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

// Recursive CPP program for level
// order traversal of Binary Tree
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

/* A binary tree node has data,
pointer to left child
and a pointer to right child */
class node
{
public:
    int data;
    node *left, *right;
};

vector<vector<int>> levelOrder(node *root)
{
    vector<vector<int>> res;

    //step 1: Make a queue
    if (root == nullptr)
        return res;

    queue<node *> queue;
    queue.push(root);

    //step 2: iterate over the Queue
    while (!queue.empty())
    {
        vector<int> cur_level;
        int size = queue.size();
        for (int i = 0; i < size; i++)
        {
            node *curr = queue.front();
            cur_level.push_back(curr->data);

            if (curr->left != nullptr)
                queue.push(curr->left);

            if (curr->right != nullptr)
                queue.push(curr->right);

            queue.pop();
        }
        if (cur_level.size() != 0)
            res.push_back(cur_level);
    }
    return res;
}

/* Helper function that allocates
a new node with the given data and
NULL left and right pointers. */
node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

/* Driver code*/
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    vector<vector<int>> result;
    result = levelOrder(root);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
