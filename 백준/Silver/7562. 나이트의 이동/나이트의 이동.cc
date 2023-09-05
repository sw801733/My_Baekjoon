#include <bits/stdc++.h>
using namespace std;

int N;

int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};

char arr[51][51];
int visited[301][301];

int result = 0;

vector<pair<int, int>> landList;

int bfs(int y, int x, int desti_y, int desti_x)
{
    visited[y][x] = 1;
    queue<pair<int, int>> q;

    q.push({y, x});

    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= N || nx < 0 || nx >= N || visited[ny][nx])
                continue;
            visited[ny][nx] = visited[y][x] + 1;

            if (desti_y == ny && desti_x == nx)
                break;

            q.push({ny, nx});
        }
    }
    return visited[desti_y][desti_x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        memset(visited, 0, sizeof(visited));
        cin >> N;

        int start_y, start_x;
        int end_y, end_x;

        cin >> start_y >> start_x;
        cin >> end_y >> end_x;

        cout << bfs(start_y, start_x, end_y, end_x) - 1 << "\n";
    }

    return 0;
}