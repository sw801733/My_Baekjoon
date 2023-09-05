#include <bits/stdc++.h>
using namespace std;

int N, M;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

char arr[51][51];
int _map[51][51];
int visited[51][51];

int result = 0;

vector<pair<int, int>> landList;

int bfs(int y, int x)
{
    visited[y][x] = 1;
    queue<pair<int, int>> q;

    q.push({y, x});

    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx] || arr[ny][nx] == 'W')
                continue;
            visited[ny][nx] = visited[y][x] + 1;

            result = max(result, visited[ny][nx]);

            q.push({ny, nx});
        }
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf(" %c", &arr[i][j]);

            if (arr[i][j] == 'L')
            {
                landList.push_back({i, j});
            }
        }
    }

    int min_time = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            memset(visited, 0, sizeof(visited));
            if (arr[i][j] == 'L')
                bfs(i, j);
        }
    }

    printf("%d", result - 1);

    return 0;
}