#include <bits/stdc++.h>
using namespace std;

int N, M;

int arr[101][101];
int visited[101][101];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

vector<pair<int, int>> cheese;

void dfs(int y, int x)
{
    visited[y][x] = 1;

    if (arr[y][x] == 1)
    {
        cheese.push_back({y, x});
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M || visited[ny][nx] == 1)
            continue;
            dfs(ny, nx);
    }
    return;
}

bool clear_cheese()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 1)
                return false;
        }
    }

    return true;
}

int main()
{

    int clear_cnt = 0;
    int one_hour_che_cnt = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    while (clear_cheese() != true)
    {

        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        clear_cnt++;
        dfs(0, 0);

        one_hour_che_cnt = cheese.size();
        for (pair<int, int> a : cheese)
        {
            arr[a.first][a.second] = 0;
        }

        cheese.clear();
    }

    cout << clear_cnt << "\n";
    cout << one_hour_che_cnt << "\n";
    return 0;
}
