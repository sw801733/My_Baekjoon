#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int R, C;

int day;

int swanY, swanX, y, x;

const int max_n = 1501;

char arr[max_n][max_n];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int swan_visited[max_n][max_n];
int visited[max_n][max_n];

queue<pair<int, int>> waterQ, water_tempQ, swanQ, swan_tempQ;

string s;

void Qclear(queue<pair<int, int>> &q)
{
    queue<pair<int, int>> empty;
    swap(q, empty);
}

void water_melting()
{
    while (waterQ.size())
    {
        int y = waterQ.front().first;
        int x = waterQ.front().second;

        waterQ.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited[ny][nx])
                continue;
            if (arr[ny][nx] == 'X')
            {
                visited[ny][nx] = 1;
                water_tempQ.push({ny, nx});
                arr[ny][nx] = '.';
            }
        }
    }
}

bool move_swan()
{
    while (swanQ.size())
    {
        int y = swanQ.front().first;
        int x = swanQ.front().second;

        swanQ.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C || swan_visited[ny][nx])
                continue;

            swan_visited[ny][nx] = 1;

            if (arr[ny][nx] == '.')
                swanQ.push({ny, nx});
            else if (arr[ny][nx] == 'X')
                swan_tempQ.push({ny, nx});
            else if (arr[ny][nx] == 'L')
                return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        cin >> s;
        for (int j = 0; j < C; j++)
        {
            arr[i][j] = s[j];
            if (arr[i][j] == 'L')
            {
                swanY = i;
                swanX = j;
            }
            if (arr[i][j] == '.' || arr[i][j] == 'L')
            {
                visited[i][j] = 1;
                waterQ.push({i, j});
            }
        }
    }

    swanQ.push({swanY, swanX});
    swan_visited[swanY][swanX] = 1;

    while (1)
    {
        if (move_swan())
            break;

        water_melting();
        waterQ = water_tempQ;
        swanQ = swan_tempQ;
        Qclear(water_tempQ);
        Qclear(swan_tempQ);
        day++;
    }

    cout << day;

    return 0;
}
