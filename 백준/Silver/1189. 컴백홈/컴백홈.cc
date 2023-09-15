#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int R, C, K;

char arr[6][6];
int visited[6][6];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int res = 0;

void dfs(int y, int x)
{

    if (visited[y][x] == K && y == 0 && x == C - 1)
    {
        res++;
        return;
    }
    if (visited[y][x] > K)
        return;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited[ny][nx])
            continue;
        if (arr[ny][nx] == 'T')
            continue;

        visited[ny][nx] = visited[y][x] + 1;
        dfs(ny, nx);
        visited[ny][nx] = 0;
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> R >> C >> K;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cin >> arr[i][j];
    }

    int y, x;

    visited[R - 1][0] = 1;
    dfs(R - 1, 0);

    cout << res;

    return 0;
}
