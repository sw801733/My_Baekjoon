#include <bits/stdc++.h>
using namespace std;

int N, K;

const int MAX = 200000;

int visited[MAX + 4];
int cnt[MAX + 4];
vector<int> adj[MAX + 4];

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    queue<int> q;
    visited[N] = 1;
    cnt[N] = 1;

    q.push(N);

    while (q.size())
    {
        int here = q.front();
        q.pop();

        for (int there : {here + 1, here - 1, here * 2})
        {
            if (there >= 0 && there <= MAX)
            {
                if (!visited[there])
                {
                    visited[there] = visited[here] + 1;
                    cnt[there] += cnt[here];
                    q.push(there);
                }
                else if (visited[there] == visited[here] + 1)
                {
                    cnt[there] += cnt[here];
                }
            }
        }
    }

    cout << visited[K] - 1 << "\n";
    cout << cnt[K];

    return 0;
}