#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

map<int, int> visited;
vector<int> adj[100];

void bfs(int s)
{
    queue<int> q;
    q.push(s);

    visited[s] = 1;
    cout << s << " ";

    while (!q.empty())
    {
        for (int i = 0; i < adj[s].size(); i++)
        {
            if (!visited[adj[s][i]])
            {
                cout << adj[s][i] << " ";

                visited[adj[s][i]] = 1;
                q.push(adj[s][i]);
            }
        }
        q.pop();
        s = q.front();
    }
}

int main()
{
    int n, m;
    n = 4;
    m = 6;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        x = 1;
        y = 2;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout << "The bfs traversal will be:" << endl;

    bfs(1);
}