#include <iostream>
#include <map>
#include <list>

using namespace std;

class Graph
{
public:
    map<int, bool> visited; //to keep track of visited node with boolean value
    map<int, list<int>> adj;

    void addEdge(int v, int w);

    void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int v)
{
    visited[v] = true;
    cout << v << " ";

    //check all adj vertices to check if they are visited
    list<int>::iterator it;
    for (it = adj[v].begin(); it != adj[v].end(); ++it)
    {
        if (!visited[*it])
        {
            DFS(*it);
        }
    }
}

int main()
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 9);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(9, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);

    return 0;
}