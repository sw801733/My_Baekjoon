#include <bits/stdc++.h>
using namespace std;

int N, M;

int visited[1001][1001];
int arr[1001][1001];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int s_y, s_x;
    fill(&visited[0][0], &visited[0][0] + 1001 * 1001, 0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 2)
            {
                s_y = i;
                s_x = j;
            }
        }
    }

    queue<pair<int, int>> q;
    visited[s_y][s_x] = 0;

    q.push({s_y, s_x});

    int x, y;

    while (q.size())
    {
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M)
                continue;
            if (visited[ny][nx] || arr[ny][nx] == 0)
                continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    visited[s_y][s_x] = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 1 && visited[i][j] == 0)
                cout << -1 << " ";
            else
                cout << visited[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}