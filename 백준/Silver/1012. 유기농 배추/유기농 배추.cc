#include <bits/stdc++.h>
using namespace std;

int arr[51][51];
int visited[51][51];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int M, N, K;

void dfs(int y, int x)
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M)
            continue;
        if (visited[ny][nx] == 0 && arr[ny][nx])
            dfs(ny, nx);
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        M = 0;
        N = 0;
        K = 0;
        int cnt = 0;

        for (int i = 0; i < 51; i++)
        {
            for (int j = 0; j < 51; j++)
            {
                arr[i][j] = 0;
                visited[i][j] = 0;
            }
        }

        cin >> M >> N >> K;

        for (int i = 0; i < K; i++)
        {
            int x, y;
            cin >> x >> y;
            arr[y][x] = 1;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (visited[i][j] == 0 && arr[i][j])
                {
                    cnt++;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
