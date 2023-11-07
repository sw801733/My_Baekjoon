#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int> adj[101];
int visited[101];

int main()
{
    int n, m;
    int x, y;

    cin >> n;
    cin >> x >> y;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q;
    q.push(x);

    while (q.size())
    {
        int here = q.front();
        q.pop();
        for (int there : adj[here])
        {
            if (visited[there])
                continue;
            visited[there] = visited[here] + 1;
            q.push(there);
        }
    }

    if (visited[y] == 0)
        cout << -1;
    else
        cout << visited[y];
}