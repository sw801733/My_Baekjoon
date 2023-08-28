#include <bits/stdc++.h>
using namespace std;

int visited[100001];
vector<int> adj[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    queue<int> q;
    adj[N].push_back(N - 1);
    adj[N].push_back(N + 1);
    adj[N].push_back(N * 2);
    visited[N] = 1;
    q.push(N);
    while (q.front() != K)
    {

        int here = q.front();
        q.pop();
        for (int there : adj[here])
        {

            if (there < 0 || there > 100000 || visited[there])
                continue;
            visited[there] = visited[here] + 1;
            adj[there].push_back(there - 1);
            adj[there].push_back(there + 1);
            adj[there].push_back(there * 2);
            q.push(there);
        }
    }

    cout << visited[K] - visited[N];

    return 0;
}
