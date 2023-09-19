#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

const int max_n = 101;

int N, M;

char arr[max_n][max_n];
int visited[max_n][max_n];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x, char c, int flag)
{
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= N || visited[ny][nx])
            continue;

        if (flag == 0)
        {
            if (arr[ny][nx] == c)
                dfs(ny, nx, c, flag);
        }
        else
        {
            if (c == 'R' || c == 'G')
            {
                if (arr[ny][nx] == 'R' || arr[ny][nx] == 'G')
                    dfs(ny, nx, c, flag);
            }
            else
            {
                if (arr[ny][nx] == c)
                    dfs(ny, nx, c, flag);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    char ch[3] = {'R', 'G', 'B'};
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    int nomarl_cnt = 0;
    int invisible_green_cnt = 0;
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {

                if (visited[i][j] == 0 && arr[i][j] == ch[k])
                {
                    nomarl_cnt++;
                    dfs(i, j, ch[k], 0);
                }
            }
        }
    }

    fill(&visited[0][0], &visited[0][0] + max_n * max_n, 0);

    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {

                if (visited[i][j] == 0 && arr[i][j] == ch[k])
                {
                    invisible_green_cnt++;
                    dfs(i, j, ch[k], 1);
                }
            }
        }
    }

    cout << nomarl_cnt << " " << invisible_green_cnt;

    return 0;
}
