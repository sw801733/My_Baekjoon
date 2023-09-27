#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    map<string, int> my_m;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        my_m[str]++;
    }

    vector<pair<string, int>> v(my_m.begin(), my_m.end());

    sort(v.begin(), v.end(), [](const pair<string, int> &a, const pair<string, int> &b)
         {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second; });

    cout << v[0].first;

    return 0;
}