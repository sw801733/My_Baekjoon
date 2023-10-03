#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int n, a[11], m, temp, ret = INF, comp[11], visited[11];
vector<int> adj[11];

// DFS 수행
// pair 를 통해 해당 지역의 인구수 (ret.second) 와 자식(연결된 구역의) 노드의 수 (res.first) 를 구한다.
pair<int, int> dfs(int here, int value)
{
    visited[here] = 1;
    pair<int, int> ret = {1, a[here]};
    for (int there : adj[here])
    {
        if (comp[there] != value)
            continue;
        if (visited[there])
            continue;
        pair<int, int> _temp = dfs(there, value);
        ret.first += _temp.first;
        ret.second += _temp.second;
    }
    return ret;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // 양방향 연결 리스트 만들기
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            adj[i].push_back(temp);
            adj[temp].push_back(i);
        }
    }

    for (int i = 1; i < (1 << n) - 1; i++)
    {
        fill(comp, comp + 11, 0);
        fill(visited, visited + 11, 0);
        int idx1 = -1, idx2 = -1;
        for (int j = 0; j < n; j++)
        {
            // 비트마스킹으로 경우의 수 구하기
            // idx 는 DFS 의 시작점을 위해 갱신

            // 1인 경우
            if (i & (1 << j))
            {
                comp[j + 1] = 1;
                idx1 = j + 1;
            }
            // 0인 경우
            else
                idx2 = j + 1;
        }

        // 1과 0에 대해 각각 DFS 수행
        pair<int, int> comp1 = dfs(idx1, 1);
        pair<int, int> comp2 = dfs(idx2, 0);

        // 시작 노드에서 부터의 자식(연결된) 노드들의 개수가 n 개 인지 비교
        // -> 두 개의 구역으로 나누어지는지를 확인
        if (comp1.first + comp2.first == n)
            ret = min(ret, abs(comp1.second - comp2.second));
    }
    cout << (ret == INF ? -1 : ret) << "\n";
}