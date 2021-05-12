#include <iostream>
#include <map>
#include <stack>
#include <list>
#include <vector>

using namespace std;

class Graph
{
    int vert;
    list<int> *adj;

public:
    Graph(int vert);
    void addEdge(int v, int w); //adds w to v's list
    void DFS(int s);            //starting source of traversal
};

Graph::Graph(int vert)
{
    this->vert = vert;
    adj = new list<int>[vert];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int s)
{
    {
        vector<bool> visited(vert, false);

        stack<int> stack;

        stack.push(s);

        while (!stack.empty())
        {
            s = stack.top();

            stack.pop();

            if (!visited[s])
            {
                visited[s] = true;
                cout << s << " ";
            }

            for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
            {
                if (!visited[*i])
                    stack.push(*i);
            }
        }
    }
}

// Driver program to test methods of graph class
int main()
{
    Graph g(5); // Total 5 vertices in graph
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);

    cout << "Following is Depth First Traversal\n";
    g.DFS(0);

    return 0;
}