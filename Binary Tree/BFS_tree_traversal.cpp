#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left, *right;
};
node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

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
            {
                queue.push(curr->left);

                if (curr->right != nullptr)
                {
                    queue.push(curr->right);

                    queue.pop();
                }

                if (cur_level.size() != 0)
                    res.push_back(cur_level);
            }
        }
    }
    return res;
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    vector<vector<int>> result;
    result = levelOrder(root);
    cout << "The traversal order is: ";
}