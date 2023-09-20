#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int T;

const int max_n = 1001;

int N, M;

char arr[max_n][max_n];
int visited[max_n][max_n];
int fire_visited[max_n][max_n];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

queue<pair<int, int>> fire_Q;
queue<pair<int, int>> S_Q;

void QClear(queue<pair<int, int>> &q)
{
    queue<pair<int, int>> empty;
    swap(empty, q);
}

void spread_fire()
{
    while (fire_Q.size())
    {
        int y = fire_Q.front().first;
        int x = fire_Q.front().second;

        fire_Q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= M || nx < 0 || nx >= N || fire_visited[ny][nx])
                continue;

            if (arr[ny][nx] == '.')
            {
                fire_visited[ny][nx] = fire_visited[y][x] + 1;
                fire_Q.push({ny, nx});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;

    while (T--)
    {
        cin >> N >> M;

        fill(&arr[0][0], &arr[0][0] + max_n * max_n, 0);
        fill(&visited[0][0], &visited[0][0] + max_n * max_n, 0);
        fill(&fire_visited[0][0], &fire_visited[0][0] + max_n * max_n, 0);

        while (S_Q.size())
        {
            S_Q.pop();
        }

        while (fire_Q.size())
        {
            fire_Q.pop();
        }

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> arr[i][j];

                if (arr[i][j] == '*')
                {
                    fire_visited[i][j] = 1;
                    fire_Q.push({i, j});
                }
                else if (arr[i][j] == '@')
                {
                    visited[i][j] = 1;
                    S_Q.push({i, j});
                }
            }
        }

        int escape_flag = 0;
        int res;
        spread_fire();

        while (S_Q.size())
        {
            int y = S_Q.front().first;
            int x = S_Q.front().second;

            S_Q.pop();

            for (int i = 0; i < 4; i++)
            {
                int ny = y + dy[i];
                int nx = x + dx[i];

                if (ny < 0 || ny >= M || nx < 0 || nx >= N)
                {
                    escape_flag = 1;
                    res = visited[y][x];
                    break;
                }

                if (visited[ny][nx])
                    continue;

                if (fire_visited[ny][nx] > visited[y][x] + 1 || ((fire_visited[ny][nx] == 0) && arr[ny][nx] == '.'))
                {
                    visited[ny][nx] = visited[y][x] + 1;
                    S_Q.push({ny, nx});
                }
            }
            if (escape_flag)
                break;
        }

        if (escape_flag)
            cout << res << "\n";
        else
            cout << "IMPOSSIBLE"
                 << "\n";
    }

    return 0;
}
