#include <bits/stdc++.h>
using namespace std;

int N, M;

vector<int> adj[100001];
int visited[100001];
int dp[100001];

int max_i = 0;
int max_cnt = 0;

int dfs(int here)
{
    int ret = 1;
    visited[here] = 1;
    for (int there : adj[here])
    {
        if (visited[there])
            continue;
        ret += dfs(there);
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[B].push_back(A);
    }

    int mx = 0;
    for (int i = 1; i <= N; i++)
    {
        memset(visited, 0, sizeof(visited));
        dp[i] = dfs(i);
        mx = max(dp[i], mx);
    }

    for (int i = 1; i <= N; i++)
    {
        if (mx == dp[i])
            cout << i << " ";
    }

    return 0;
}
