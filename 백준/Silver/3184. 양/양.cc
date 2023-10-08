#include <bits/stdc++.h>

using namespace std;

char arr[251][251];
int visited[251][251];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int R, C;
int sheep_cnt = 0, wolf_cnt = 0;
int sheep_cnt_in = 0, wolf_cnt_in = 0;

void dfs(int y, int x)
{

    if (arr[y][x] == 'o')
        sheep_cnt_in++;
    if (arr[y][x] == 'v')
        wolf_cnt_in++;
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= R || nx < 0 || nx >= C)
            continue;
        if (visited[ny][nx] || arr[ny][nx] == '#')
            continue;

        dfs(ny, nx);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 'v')
                wolf_cnt++;
            if (arr[i][j] == 'o')
                sheep_cnt++;
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {

            if (visited[i][j] == 0)
            {
                sheep_cnt_in = 0;
                wolf_cnt_in = 0;
                dfs(i, j);

                if (sheep_cnt_in > wolf_cnt_in)
                {
                    wolf_cnt -= wolf_cnt_in;
                }
                else
                    sheep_cnt -= sheep_cnt_in;
            }
        }
    }

    cout << sheep_cnt << " " << wolf_cnt;

    return 0;
}