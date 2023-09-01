#include <bits/stdc++.h>
using namespace std;

int visited[200001];

string result;

void dfs(int here, vector<int> *adj)
{
    if (visited[here] == 0)
        visited[here] = 1;

    for (int there : adj[here])
    {
        if (visited[there] == 0)
        {
            if (visited[here] == 1)
                visited[there] = -1;
            else
                visited[there] = 1;

            dfs(there, adj);
        }
        else if ((visited[here] == 1 && visited[there] == 1) || (visited[here] == -1 && visited[there] == -1))
            result = "NO";
    }
}

bool checkVisited(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == 0)
        {
            cout << i << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        result = "";
        fill(&visited[0], &visited[0] + 200001, 0);
        vector<int> adj[200001];

        int N, M;
        cin >> N >> M;

        for (int i = 0; i < M; i++)
        {
            int a, b;
            cin >> a >> b;

            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for (int i = 1; i <= N; i++)
        {
            if (visited[i] == 0)
            {
                dfs(i, adj);
            }
        }
        if (result == "NO")
            cout << result << "\n";
        else
            cout << "YES\n";
    }

    return 0;
}
