#include <bits/stdc++.h>

using namespace std;

int N;
int ret = 987654321;

int visited[21][21];
int arr[21][21];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int setFlower(int y, int x)
{
    visited[y][x] = 1;
    int sum = arr[y][x];

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = 1;
        sum += arr[ny][nx];
    }

    return sum;
}

bool check(int y, int x)
{
    if (visited[y][x])
        return 0;

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= N || visited[ny][nx])
            return 0;
    }

    return 1;
}

void eraseFlower(int y, int x)
{
    visited[y][x] = 0;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        visited[ny][nx] = 0;
    }
}

void flower(int cnt, int sum)
{
    if (cnt == 3)
    {
        ret = min(ret, sum);
        return;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (check(i, j))
            {
                flower(cnt + 1, sum + setFlower(i, j));
                eraseFlower(i, j);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    flower(0, 0);
    cout << ret;

    return 0;
}