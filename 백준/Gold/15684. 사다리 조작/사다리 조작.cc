#include <bits/stdc++.h>

using namespace std;

const int INF = 987654321;

int n, m, h, a, b, ret = INF, visited[34][34];

// i 번쨰 사다리가 i 번째로 도착했는지 확인
bool check()
{
    // 사다리 타기 시작
    for (int i = 1; i <= n; i++)
    {
        int start = i;
        for (int j = 1; j <= h; j++)
        {
            // 우로 이동
            if (visited[j][start])
                start++;
            // 좌로 이동
            else if (visited[j][start - 1])
                start--;
        }
        if (start != i)
            return false;
    }
    return true;
}

void go(int here, int cnt)
{
    // 3개 이상 사다리 설정 시 return
    if (cnt > 3 || cnt >= ret)
        return;
    // i 번쨰 사다리가 i 번째로 도착했는지 확인
    if (check())
    {
        ret = min(ret, cnt);
        return;
    }
    // 사다리를 설정하는 로직으로
    // 사다리의 높이가 내려가면서 진행되야 하므로 here 부터 시작
    for (int i = here; i <= h; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // 사다리는 일렬로 있으면 안됨
            if (visited[i][j] || visited[i][j - 1] || visited[i][j + 1])
                continue;
            visited[i][j] = 1;
            go(i, cnt + 1);
            visited[i][j] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> h;

    for (int i = 0; i < m; i++)
    {
        // 사다리 설정
        cin >> a >> b;
        visited[a][b] = 1;
    }

    go(1, 0);
    cout << ((ret == INF) ? -1 : ret);
    return 0;
}