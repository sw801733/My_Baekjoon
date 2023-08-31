#include <bits/stdc++.h>
using namespace std;

int visited[100001];
vector<int> adj[100001];

int N, M;
int result = 0;

void dfs(int here)
{
    visited[here] = 1;

    for (int there : adj[here])
    {
        if (visited[there] == 0)
        {
            visited[there] = 1;
            dfs(there);
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

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
