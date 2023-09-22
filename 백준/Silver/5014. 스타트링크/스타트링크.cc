#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

const int max_floor = 1000001 * 2;
int F, S, G, U, D;

int visited[max_floor];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> F >> S >> G >> U >> D;

    if (S == G)
    {
        cout << 0;
        return 0;
    }

    queue<int> q;
    q.push(S);

    visited[S] = 1;

    while (q.size())
    {
        int here = q.front();
        q.pop();

        for (int there : {here + U, here - D})
        {
            if (there < 1 || there > F || visited[there])
            {
                continue;
            }

            if (there == G)
            {
                cout << visited[here];
                return 0;
            }

            visited[there] = visited[here] + 1;
            q.push(there);
        }
    }

    cout << "use the stairs";
    return 0;
}
