#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[101][101];
    int visited[101][101] = {
        0,
    };

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%1d", &arr[i][j]);

    int x = 0;
    int y = 0;
    int dy[] = {-1, 0, 1, 0};
    int dx[] = {0, 1, 0, -1};

    queue<pair<int, int>> q;
    visited[y][x] = 1;

    q.push({y, x});

    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny >= N || ny < 0 || nx >= M || nx < 0 || arr[ny][nx] == 0)
                continue;
            if (visited[ny][nx] > 0)
                continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    printf("%d", visited[N - 1][M - 1]);

    return 0;
}
