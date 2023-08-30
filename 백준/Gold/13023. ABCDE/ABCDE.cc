#include <bits/stdc++.h>
using namespace std;

int visited[100001];
vector<int> adj[100001];

int N, M;
int result = 0;

void dfs(int here, int depth)
{

    if (depth == 4)
    {
        result = 1;
        return;
    }
    for (int there : adj[here])
    {
        if (result)
            return;
        if (visited[there] == 0)
        {
            visited[there] = 1;
            dfs(there, depth + 1);
            visited[there] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < N; i++)
    {
        if (result)
            break;
        visited[i] = 1;
        dfs(i, 0);
        visited[i] = 0;
    }

    if (result)
        cout << 1;
    else
        cout << 0;

    return 0;
}
