#include <bits/stdc++.h>
using namespace std;

int N, M;

int arr[9][9];
int temp[9][9];
int visited[9][9];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int dfs(int y, int x, int cnt)
{
    cnt++;
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M)
            continue;

        if (arr[ny][nx] == 1 || arr[ny][nx] == 2 || visited[ny][nx] == 1)
            continue;
        cnt = dfs(ny, nx, cnt);
    }
    return cnt;
}

int do_dfs()
{
    int cnt = 0;
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            visited[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (visited[i][j] == 0 && arr[i][j] == 2)
            {
                cnt += dfs(i, j, 0);
            }
        }
    }

    return cnt;
}

int main()
{

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    int min = 64;
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][j] = 1;
                for (int k = 0; k < N; k++)
                {
                    for (int m = 0; m < M; m++)
                    {
                        if (arr[k][m] == 0)
                        {

                            arr[k][m] = 1;
                            for (int o = 0; o < N; o++)
                            {
                                for (int p = 0; p < M; p++)
                                {
                                    if (arr[o][p] == 0)
                                    {
                                        arr[o][p] = 1;
                                        cnt = do_dfs();
                                        if (cnt < min)
                                            min = cnt;
                                        arr[o][p] = 0;
                                    }
                                }
                            }
                            arr[k][m] = 0;
                        }
                    }
                }
                arr[i][j] = 0;
            }
        }
    }

    int temp1 = 0;
    int temp2 = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 2)
            {
                temp1++;
            }
            if (arr[i][j] == 1)
                temp2++;
        }
    }

    cout << N * M - 3 - min - temp2;
    return 0;
}
