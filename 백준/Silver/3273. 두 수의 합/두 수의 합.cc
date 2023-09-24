#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x;
    int res = 0;

    map<int, int> m;
    vector<int> v;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
        m[temp] = 1;
    }

    cin >> x;

    for (int i = 0; i < N; i++)
    {
        if (m[x - v[i]] && m[v[i]])
            res++;
    }

    cout << res / 2;

    return 0;
}