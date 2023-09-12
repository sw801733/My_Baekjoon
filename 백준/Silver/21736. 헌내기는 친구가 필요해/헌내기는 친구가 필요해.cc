#include <bits/stdc++.h>
using namespace std;

int R, C;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

char arr[601][601];

int visited[601][601];

int s_y, s_x;

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 'I')
            {
                s_y = i;
                s_x = j;
            }
        }
    }

    visited[s_y][s_x] = 1;

    queue<pair<int, int>> q;
    q.push({s_y, s_x});

    int cnt = 0;

    while (q.size())
    {
        int y = q.front().first;
        int x = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited[ny][nx] || arr[ny][nx] == 'X')
                continue;

            if (arr[ny][nx] == 'P')
                cnt++;

            visited[ny][nx] = visited[y][x] + 1;

            q.push({ny, nx});
        }
    }

    if (cnt)
        cout << cnt;
    else
        cout << "TT";

    return 0;
}