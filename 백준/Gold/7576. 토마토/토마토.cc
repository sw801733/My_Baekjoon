#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

const int max_n = 1001;

int N, M;

int arr[max_n][max_n];
int visited[max_n][max_n];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

queue<pair<int, int>> Q;
queue<pair<int, int>> tempQ;

void Qclear(queue<pair<int, int>> &q)
{
    queue<pair<int, int>> empty;
    swap(empty, q);
}

void bfs()
{
    while (Q.size())
    {
        int y = Q.front().first;
        int x = Q.front().second;

        Q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= M || nx < 0 || nx >= N || visited[ny][nx])
                continue;

            if (arr[ny][nx] == 0)
            {
                visited[ny][nx] = 1;
                arr[ny][nx] = 1;
                tempQ.push({ny, nx});
            }
        }
    }
}

bool check()
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 0)
                return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                visited[i][j] = 1;
                Q.push({i, j});
            }
        }
    }

    int day = 0;
    int flag = 0;
    while (1)
    {
        if (check() == true)
            break;
        if (Q.size() == 0)
        {
            flag = 1;
            break;
        }

        bfs();
        Q = tempQ;
        Qclear(tempQ);
        day++;
    }

    if (flag == 1)
        cout << -1;
    else
        cout << day;

    return 0;
}
