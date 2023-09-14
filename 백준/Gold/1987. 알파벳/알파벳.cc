#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int R, C;

int res = 1;

char arr[21][21];
int visited[21][21];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

bool ap_check[27];

int dfs(int y, int x, int cnt)
{
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= R || nx < 0 || nx >= C)
            continue;

        if (visited[ny][nx] || ap_check[arr[ny][nx] - 'A'] == true)
        {
            continue;
        }
        
        visited[ny][nx] = 1;
        ap_check[arr[ny][nx] - 'A'] = true;

        int temp = dfs(ny, nx, ++cnt);
        res = max(temp, res);

        visited[ny][nx] = 0;
        ap_check[arr[ny][nx] - 'A'] = false;
        cnt--;
        
    }    
    return cnt;

}


int main()
{

    cin >> R >> C;

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            cin >> arr[i][j];
    

    visited[0][0] = 1;
    ap_check[arr[0][0] - 'A'] = true;

    dfs(0, 0, 1);


    cout << res;


    return 0;
}
