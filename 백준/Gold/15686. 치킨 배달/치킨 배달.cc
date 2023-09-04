#include <bits/stdc++.h>
using namespace std;

int N, M;

vector<vector<int>> chickenList;
vector<pair<int, int>> home, chicken;

void combi(int start, vector<int> v)
{
    if (v.size() == M)
    {
        chickenList.push_back(v);
        return;
    }
    for (int i = start + 1; i < chicken.size(); i++)
    {
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int n;
            cin >> n;
            if (n == 1)
                home.push_back({i, j});
            else if (n == 2)
                chicken.push_back({i, j});
        }
    }

    int result = INT_MAX;
    vector<int> v;
    combi(-1, v);
    for (vector<int> cList : chickenList)
    {
        int ret = 0;
        for (pair<int, int> temp_home : home)
        {
            int _min = INT_MAX;
            for (int ch : cList)
            {
                int geri = abs(temp_home.first - chicken[ch].first) + abs(temp_home.second - chicken[ch].second);
                _min = min(_min, geri);
            }
            ret += _min;
        }
        result = min(result, ret);
    }

    cout << result;
    return 0;
}