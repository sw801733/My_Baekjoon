#include <bits/stdc++.h>
using namespace std;

int N;

int visited[26][26];
int adj[26][26];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int dfs(int y, int x, int cnt)
{
    cnt++;
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= N || visited[ny][nx] == 1)
            continue;

        if (adj[ny][nx] == 1)
            cnt = dfs(ny, nx, cnt);
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &N);

    int total_cnt = 0;
    vector<int> my_v;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%1d", &adj[i][j]);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (visited[i][j] == 0 && adj[i][j] == 1)
            {
                total_cnt++;
                int temp = dfs(i, j, 0);
                my_v.push_back(temp);
            }
        }
    }
    sort(my_v.begin(), my_v.end());

    printf("%d\n", total_cnt);

    for (int n : my_v)
        printf("%d\n", n);
}
