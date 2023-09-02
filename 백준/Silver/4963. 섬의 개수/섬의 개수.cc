#include <bits/stdc++.h>
using namespace std;

int w, h;
int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};

int arr[51][51];
int visited[51][51];

void dfs(int y, int x)
{
    visited[y][x] = 1;

    for (int i = 0; i < 8; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= h || nx < 0 || nx >= w || visited[ny][nx] == 1 || arr[ny][nx] == 0)
            continue;

        dfs(ny, nx);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1)
    {
        fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
        fill(&arr[0][0], &arr[0][0] + 51 * 51, 0);
        w = 0, h = 0;
        cin >> w >> h;

        if (w == 0 && h == 0)
            break;

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
                cin >> arr[i][j];
        }

        int cnt = 0;
        for (int i = 0; i < w; i++)
        {
            for (int j = 0; j < h; j++)
            {
                if (visited[j][i] == 0 && arr[j][i] == 1)
                {
                    // cout << i << j << endl;
                    dfs(j, i);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
