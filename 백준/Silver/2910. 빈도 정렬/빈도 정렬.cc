#include <bits/stdc++.h>
using namespace std;

map<int, int> my_m, my_idx;
vector<pair<int, int>> my_v;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return my_idx[a.first] < my_idx[b.first];
    }
    return a.second > b.second;
}

int main()
{
    int N, C;

    cin >> N >> C;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        my_m[a]++;
        if (my_idx[a] == 0)
            my_idx[a] = i + 1;
    }

    for (auto i : my_m)
    {
        my_v.push_back({i.first, i.second});
    }

    sort(my_v.begin(), my_v.end(), cmp);

    for (auto iter : my_v)
    {
        for (int i = 0; i < iter.second; i++)
            cout << iter.first << " ";
    }

    return 0;
}
