#include <bits/stdc++.h>
using namespace std;

const int MAX = 500000;

int N, K;

int turn = 1;
bool OK = false;

int visited[2][MAX + 2];

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    if (N == K)
    {
        cout << 0;
        return 0;
    }

    visited[0][N] = 1;
    queue<int> q;

    q.push(N);

    while (q.size())
    {
        K += turn;

        if (K > MAX)
            break;

        if (visited[turn % 2][K])
        {
            OK = true;
            break;
        }

        int qSize = q.size();
        for (int i = 0; i < qSize; i++)
        {
            int here = q.front();
            q.pop();

            for (int there : {here - 1, here + 1, here * 2})
            {
                if (there < 0 || there > MAX || visited[turn % 2][there])
                    continue;

                visited[turn % 2][there] = visited[(turn + 1) % 2][here] + 1;

                if (there == K)
                {
                    OK = true;
                    break;
                }
                q.push(there);
            }
        }
        if (OK == true)
            break;
        turn++;
    }

    if (OK == true)
        cout << turn;
    else
        cout << -1;

    return 0;
}