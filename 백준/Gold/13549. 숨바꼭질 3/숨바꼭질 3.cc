#include <bits/stdc++.h>

using namespace std;

const int MAX = 200001;

int visited[MAX];
// vector<int> adj[MAX];

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;

    cin >> N >> K;

    visited[N] = 1;
    queue<int> q;

    q.push(N);

    while (q.size())
    {
        int here = q.front();

        q.pop();

        if (here == K)
            break;

        for (int there : {here * 2 , here - 1, here + 1})
        {
            if (there < 0 || there >= MAX || visited[there])
                continue;

            if (there != here * 2)
                visited[there] = visited[here] + 1;
            else
                visited[there] = visited[here];

            q.push(there);
        }
    }

    cout << visited[K] - 1;

    return 0;
}