#include <bits/stdc++.h>
using namespace std;

const int MAX = 200000;

int N, K;

int min_time;

int visited[MAX];
int prev_way[MAX];

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    visited[N] = 1;
    queue<int> q;

    q.push(N);

    while (q.size())
    {
        int here = q.front();
        q.pop();

        if (here == K)
        {
            min_time = visited[here] - 1;
            break;
        }

        for (int there : {here - 1, here + 1, here * 2})
        {
            if (there < 0 || there >= MAX || visited[there])
                continue;

            prev_way[there] = here;
            visited[there] = visited[here] + 1;
            q.push(there);
        }
    }

    cout << min_time << "\n";
    vector<int> v;
    for (int i = K; i != N; i = prev_way[i])
    {
        v.push_back(i);
    }

    v.push_back(N);
    reverse(v.begin(), v.end());

    for (int n : v)
        cout << n << " ";

    return 0;
}