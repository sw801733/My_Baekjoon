#include <bits/stdc++.h>
using namespace std;

int N, M;

int s_x, s_y;
int e_x, e_y;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int visited[301][301];
char arr[301][301];

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    cin >> s_y >> s_x >> e_y >> e_x;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    bool flag = false;

    int x, y;
    int cnt = 0;

    s_y -= 1;
    s_x -= 1;
    e_y -= 1;
    e_x -= 1;

    while (1)
    {

        fill(&visited[0][0], &visited[0][0] + 301 * 301, 0);
        visited[s_y][s_x] = 1;
        queue<pair<int, int>> q;
        queue<pair<int, int>> q2;

        q.push({s_y, s_x});
        while (q.size())
        {
            y = q.front().first;
            x = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int ny = y + dy[i];
                int nx = x + dx[i];

                if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx])
                    continue;

                if (ny == e_y && nx == e_x)
                {
                    flag = true;
                    break;
                }
                if (arr[ny][nx] == '1')
                {
                    // cout << "n";
                    q2.push({ny, nx});
                }
                if (arr[ny][nx] == '0')
                {
                    // cout << "a";
                    visited[ny][nx] = visited[y][x] + 1;
                    q.push({ny, nx});
                }
            }
            if (flag == true)
                break;
        }

        if (flag == true)
        {
            cout << ++cnt;
            return 0;
        }
        while (q2.size())
        {
            int a = q2.front().first;
            int b = q2.front().second;
            arr[a][b] = '0';

            q2.pop();
        }

        cnt++;
    }

    return 0;
}