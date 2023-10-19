#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int N;
int r1, c1, r2, c2;

int dy[] = {-2, -2, 0, 0, 2, 2};
int dx[] = {-1, 1, -2, 2, -1, 1};

int visited[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    cin >> r1 >> c1 >> r2 >> c2;

    queue<pair<int, int>> q;
    visited[r1][c1] = 1;

    q.push({r1, c1});

    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;

        q.pop();

        for (int i = 0; i < 6; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= N || visited[ny][nx])
                continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    if (visited[r2][c2] == 0)
        cout << -1;
    else
        cout << visited[r2][c2] - 1;

    return 0;
}
