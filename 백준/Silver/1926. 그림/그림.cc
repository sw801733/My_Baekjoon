#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

const int max_n = 501;

int N, M;

int arr[max_n][max_n];
int visited[max_n][max_n];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int dfs(int y, int x)
{
    int cnt = 1;
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx])
            continue;

        if (arr[ny][nx] == 1)
        {
            cnt += dfs(ny, nx);
        }
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];
    }

    int painting_cnt = 0;
    int painting_max = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (visited[i][j] == 0 && arr[i][j] == 1)
            {
                painting_cnt++;
                painting_max = max(dfs(i, j), painting_max);
            }
        }
    }

    cout << painting_cnt << "\n";
    cout << painting_max << "\n";


    return 0;
}
