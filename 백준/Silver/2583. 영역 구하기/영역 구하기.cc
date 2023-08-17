#include <bits/stdc++.h>
using namespace std;

int arr[101][101];
int M, N, K;

int visited[101][101];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int dfs(int y, int x, int cnt)
{
    cnt += 1;
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= M || nx < 0 || nx >= N)
            continue;
        if (visited[ny][nx] == 0 && arr[ny][nx] == 0)
        {
            cnt = dfs(ny, nx, cnt);
        }
    }
    return cnt;
}

int main()
{
    cin >> M >> N >> K;

    for (int i = 0; i < K; i++)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        for (int j = y; j < b; j++)
        {
            for (int k = x; k < a; k++)
                arr[j][k] = 1;
        }
    }

    int area_cnt = 0;
    vector<int> my_v;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (visited[i][j] == 0 && arr[i][j] == 0)
            {
                area_cnt++;
                int cnt = dfs(i, j, 0);
                my_v.push_back(cnt);
            }
        }
    }
    sort(my_v.begin(), my_v.end());
    cout << area_cnt << "\n";

    for (int n : my_v)
        cout << n << " ";

    return 0;
}
