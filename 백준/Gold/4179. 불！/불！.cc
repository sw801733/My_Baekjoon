#include <bits/stdc++.h>
using namespace std;

int R, C;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

char arr[1002][1002];
int fire_visited[1002][1002];
int J_visited[1002][1002];

int J_start_y, J_start_x;
int F_start_y, F_start_x;

const int INF = 987654321;

bool in(int a, int b)
{
    return 0 <= a && a < R && 0 <= b && b < C;
}

vector<pair<int, int>> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C;
    queue<pair<int, int>> q;

    fill(&fire_visited[0][0], &fire_visited[0][0] + 1002 * 1002, INF);

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 'J')
            {
                J_start_y = i;
                J_start_x = j;
            }
            else if (arr[i][j] == 'F')
            {
                q.push({i, j});
                fire_visited[i][j] = 1;
            }
        }
    }

    int y, x;
    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {

            int ny = y + dy[i];
            int nx = x + dx[i];
            if (!in(ny, nx))
                continue;
            if (arr[ny][nx] == '#' || fire_visited[ny][nx] != INF)
                continue;

            fire_visited[ny][nx] = fire_visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    J_visited[J_start_y][J_start_x] = 1;
    q.push({J_start_y, J_start_x});

    int result = 0;

    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();

        if (y == 0 || x == 0 || y == R - 1 || x == C - 1)
        {
            result = J_visited[y][x];
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (!in(ny, nx))
                continue;
            if (arr[ny][nx] == '#' || J_visited[ny][nx])
                continue;

            if (fire_visited[ny][nx] <= J_visited[y][x] + 1)
            {
                continue;
            }

            J_visited[ny][nx] = J_visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    if (result == 0)
        cout << "IMPOSSIBLE";
    else
        cout << result;

    return 0;
}