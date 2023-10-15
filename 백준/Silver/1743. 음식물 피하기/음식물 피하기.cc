#include <bits/stdc++.h>

using namespace std;

int N, M;
int K;
int ret = 1;

int arr[101][101];
int visited[101][101];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int dfs(int y, int x)
{
    visited[y][x] = 1;
    int cnt = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny > N || nx < 0 || nx > M || visited[ny][nx] == 1)
            continue;
        if (arr[ny][nx] == 1)
            cnt += dfs(ny, nx);
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;

    for (int i = 0; i < K; i++)
    {
        int r, c;
        cin >> r >> c;

        arr[r][c] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (visited[i][j] == 0 && arr[i][j] == 1)
            {
                ret = max(ret, dfs(i, j));
            }
        }
    }

    cout << ret;

    return 0;
}