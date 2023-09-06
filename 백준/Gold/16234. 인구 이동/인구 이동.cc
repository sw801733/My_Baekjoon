#include <bits/stdc++.h>
using namespace std;

int N, L, R;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int arr[51][51];
int visited[51][51];

int result = 0;
int sum = 0;

vector<pair<int, int>> v;

void dfs(int y, int x)
{
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= N || visited[ny][nx])
            continue;

        if (abs(arr[ny][nx] - arr[y][x]) >= L && abs(arr[ny][nx] - arr[y][x]) <= R)
        {
            v.push_back({ny, nx});
            sum += arr[ny][nx];
            dfs(ny, nx);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> L >> R;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    int cnt = 0;
    while (1)
    {
        bool flag = 0;
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (visited[i][j] == 0)
                {
                    sum = arr[i][j];
                    v.clear();
                    v.push_back({i, j});
                    dfs(i, j);
                    if (v.size() == 1)
                        continue;
                    for (auto n : v)
                    {
                        arr[n.first][n.second] = sum / v.size();
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 0)
            break;
        cnt++;
    }
    cout << cnt;

    return 0;
}