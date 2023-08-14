#include <bits/stdc++.h>
using namespace std;

int arr[101][101];
int N;

int visited[101][101];
int area[101][101];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x)
{
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || ny >= N)
            continue;

        if (visited[ny][nx] == 0 && area[ny][nx] == 1)
            dfs(ny, nx);
    }
}

int main()
{

    int max_level = 1;
    int max_cnt = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    for (int i = 0; i < 100; i++)
    {
        int cnt = 0;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                visited[j][k] = 0;
            }
        }

        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (arr[j][k] < i)
                    area[j][k] = 0;
                else
                    area[j][k] = 1;
            }
        }

        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (visited[j][k] == 0 && area[j][k] == 1)
                {
                    dfs(j, k);
                    cnt++;
                }
            }
        }
        if (max_cnt < cnt)
        {
            max_cnt = cnt;
        }
    }

    cout << max_cnt;

    return 0;
}
